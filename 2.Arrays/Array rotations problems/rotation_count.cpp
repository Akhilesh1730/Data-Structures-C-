#include<iostream>
using namespace std;
int search(int arr[],int low,int high)
{
	
	int mid=(low+high)/2;
    if(low>high) return 0;
	if(high==low) return low;
    if(arr[mid]>arr[mid+1]) return mid+1;
    if(arr[mid]<arr[mid-1]) return mid;
 	
	if(arr[high]>arr[mid])
		return search(arr,low,mid-1);
    if(arr[high]<arr[mid])
		return search(arr,mid+1,high);	
   	
}
int main()
{
	int n;
	cout<<"\nEnter n";
	cin>>n;
	
	int arr[n],input[n];
	
	cout<<"\nEnter array of size "<<n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	
	cout<<endl<<search(arr,0,n-1);
	
}
