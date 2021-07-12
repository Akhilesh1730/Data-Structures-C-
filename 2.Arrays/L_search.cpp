#include<iostream>
using namespace std;
int main()
{
	int a[10],n,flag=0;
	cout<<"\nEnter the elements in array";
	for(int i=0;i<10;i++) cin>>a[i];
	
	cout<<"\nEnter the element you want to search";
	cin>>n;
	
	for(int i=0;i<10;i++) 
	{
		if(a[i]==n) 
		{ 
	       cout<<"\nElement found at location "<<i;
		   flag=1;
		}
	}
	if(flag==0) cout<<"\nElement not found";
}