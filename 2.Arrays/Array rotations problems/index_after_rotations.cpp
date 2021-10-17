#include<iostream>
using namespace std;
int find_index(int arr[],int ranges[][2],int rotations,int index)
{
	for(int i=rotations-1;i>=0;i--)
	{
		int f=ranges[i][0];
		int l=ranges[i][1];
		
		if(index>=f && index<=l)
		{
			
			if(index==f)
				index=l;
			else 
				index--;
		}
	}
	
	return index;
}
int main()
{
	int n,rotations,index;
	
	cout<<"\nEnter size";
	cin>>n;
	
	int arr[n];
	
	cout<<"\nEnter array";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nEnter number of rotations";
	cin>>rotations;
	
	int ranges[rotations][2];
	
	cout<<"\nEnter ranges";
	for(int i=0;i<rotations;i++)
	{
		cin>>ranges[i][0];
		cin>>ranges[i][1];
	}
	
	
	cout<<"\nEnter Index";
	cin>>index;
	
	cout<<"\nValue at index "<<index<<" after rotation is ";
	cout<<arr[find_index(arr,ranges,rotations,index)];
}
