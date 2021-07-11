#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j;
	cout<<"\nEnter the elements in array";
	for(int i=0;i<10;i++) cin>>a[i]; 
	i=0,j=9;
	while(i<=j)
	{
		a[i]=a[i]+a[j];
		a[j]=a[i]-a[j];
		a[i]=a[i]-a[j];
		i++,j--;
    }
	cout<<"\nAfter reverse ";
	for(int i=0;i<10;i++) cout<<a[i]<<" ";
	
	
}
