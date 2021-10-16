#include<iostream>
using namespace std;
class blockshift
{
	
	public:
	void get()
	{
		int size,*arr,k;
		cout<<"\nEnter size";
		cin>>size;
		
		
		arr=new int[size];
		
		cout<<"\nEnter array";
		for(int i=0;i<size;i++)
		cin>>arr[i];
	    
		cout<<"\nHowmany elements to shift";
		cin>>k;
	    
		cout<<"\nArray before shift ";
		
		for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	    
	    block_shift(arr,k,size);
        
		cout<<"\nArray after shift ";
		
		for(int i=0;i<size;i++)
		cout<<arr[i]<<" ";
	    		
	}
	
	void swap(int arr[],int s,int e,int k)
	{
		int temp;
		for(int i=0;i<k;i++)
		{
			temp=arr[s+i];
			arr[s+i]=arr[e+i];
			arr[e+i]=temp;
		}
	}
	void block_shift(int arr[],int d,int n)
	{
		
		
		if(n-d==d)
		{
			swap(arr,0,n-d,d);
			return;
		}
		if(d<(n-d)) 
		{
			swap(arr,0,n-d,d);
			block_shift(arr,d,n-d);
			
		}
		else if(d>(n-d))
		{
			swap(arr,0,d,n-d);
			block_shift(arr+n-d,2*d-n,d);
		}
	}

};
int main()
{
	blockshift b;
	b.get();
}
