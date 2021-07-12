#include<iostream>
using namespace std;
int main()
{
	int a[100],len,choice,n,temp;
	
	cout<<"\nEnter the number of elements you want to enter";
	cin>>len;
	cout<<"\nEnter elements";
	for(int i=0;i<len;i++) cin>>a[i];
	cout<<"\nEnter the operation you want to perform";
	cout<<"\n1. RIGHT ROTATE";
	cout<<"\n2. LEFT ROTATE";
	cout<<"\n3. RIGHT SHIFT";
	cout<<"\n4. LEFT SHIFT";
	cout<<"\n";
	cin>>choice;
	switch(choice)
	{
		case 1: 
		       cout<<"\nHowmany rotations you want";
			   cin>>n;
			   for(int i=0;i<n;i++)
			   {
				   temp=a[len-1];
				   for(int i=len-1;i>0;i--) a[i]=a[i-1];
				    a[0]=temp;
			   }	
              
			   break; 			   
		case 2: 
			   cout<<"\nHowmany rotations you want";
			   cin>>n;
			   for(int i=0;i<n;i++)
			   {
				   temp=a[0];
				   for(int i=0;i<len-1;i++) a[i]=a[i+1];
				   a[len-1]=temp;
			   }
			   break;
		case 3: 
			   cout<<"\nHowmany shifts you want";
			   cin>>n;
			   
			   for(int i=0;i<n;i++)
			   {
				   for(int i=len-1;i>0;i--)
					{
						a[i]=a[i-1];
		
					}
					a[0]=0;
			   }
			   break;
		case 4: 
			   cout<<"\nHowmany shifts you want";
			   cin>>n;
			  
			   for(int i=0;i<n;i++)
			   {
				  for(int i=0;i<len-1;i++) a[i]=a[i+1];
				a[len-1]=0;
			   }
			   break;
		default: cout<<"\nWrong choice";
	}
	
	
	for(int i=0;i<len;i++)
	{
		cout<<" "<<a[i];
	}
	
}