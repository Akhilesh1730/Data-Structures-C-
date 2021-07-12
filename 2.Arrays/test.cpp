#include<iostream>
using namespace std;
int main()
{
	int c[999],b[10],a[10];
	cout<<"\nEnter the values of set A(not more than 10)";
	for(int i=0;i<10;i++)cin>>a[i];
	
	cout<<"\nEnter the values of set B(not more than 10)";
	for(int i=0;i<10;i++)cin>>b[i];
	
	//Union operation
	/*int j=0,k=0;
	for(int i=0;i<10;i++)
	{
	  c[i]=a[i];
      k++; 
	}
	while(j<10)
	 {
		if(a[j]!=b[j]) c[k++]=b[j++];
    	else j++;
	 }
	 for(int i=0;i<k;i++)
		 cout<<" "<<c[i];
	*/
	//INTERSECTION 
	/*int k=0;
	for(int i=0;i<10;i++)
	{
		
		for(int j=0;j<10;j++)
			if(a[i]==b[j]) c[k++]=b[j];
	}
	for(int i=0;i<k;i++)
		 cout<<" "<<c[i];
	 */
	//A-B
    int k=0;
	for(int i=0;i<10;i++)
	{
		
		for(int j=0;j<10;j++)
			if(a[i]!=b[j]) c[k++]=a[i];
	}
	for(int i=0;i<k;i++)
		 cout<<" "<<c[i];	
	 
}
