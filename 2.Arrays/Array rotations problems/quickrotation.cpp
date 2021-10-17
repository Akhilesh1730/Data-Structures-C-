#include<iostream>
using namespace std;
void leftrotate(int arr[],int k,int n)
{
	cout<<endl;
	int mod=k%n;
	for(int i=0;i<n;i++)
	{
		cout<<arr[(mod+i)%n];
		
	}
}
int main()
{
	int n,k;
	cout<<"\nEnter n";
	cin>>n;
	
	int arr[n];
	
	cout<<"\nEnter array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}		
	
	k=2;
	leftrotate(arr,k,n);
	
	k=3;
	leftrotate(arr,k,n);
	
	k=4;
	leftrotate(arr,k,n);
	
}
