#include<iostream>
using namespace std;
int main()
{
	int a[10],len,del,ind;
	cout<<"\nEnter the length of array ";
	cin>>len;
	
	if(len>10) cout<<"\nSize is only 10";
	else
	{
		cout<<"\nEnter "<<len<<" Elements";
		for(int i=0;i<len;i++) cin>>a[i];
		cout<<endl;
		
		cout<<"\n"<<len<<" Elements are";
		for(int i=0;i<len;i++) cout<<a[i]<<" ";
		
		cout<<"\nEnter the position for deletion of element";
		cin>>ind;
		ind--;
		
		for(int i=ind;i<len-1;i++)
		{
			a[i]=a[i+1];
		}	
      len--;		
       

	   cout<<"\n"<<len<<" Elements after deletion are";
		for(int i=0;i<len;i++) cout<<a[i]<<" ";
	}
}