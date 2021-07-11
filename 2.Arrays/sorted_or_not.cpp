#include<iostream>
using namespace std;
int main()
{
	int a[100],n,flag=0;
	cout<<"Enter the number of element you wanted to enter";
	cin>>n;
	
	cout<<"\nEnter the elements in array";
	for(int i=0;i<n;i++) cin>>a[i];
	
	if(n==0) cout<<"\nEnter elements first";
    else
    {
		if(n==1) cout<<"\nonly one element";
		else 
		{
			if(a[0]<a[1])
			{
				for(int i=2;i<n;i++) 
				{
					if(a[i]<a[i-1]) 
					{
						cout<<"\nArray not sorted";
						break;
					}
					else flag=1;
				}
			}
		    else
			{
				for(int i=2;i<n;i++)
				{
					if(a[i]>a[i-1])
					{
						cout<<"\nArray not sorted";
						break;
					}
					else flag=2;
						
				}
			}
		}
	}
      if(flag==1) cout<<"\nArray is in Ascending order";
      if(flag==2) cout<<"\nArray is in Descending order";	  
}