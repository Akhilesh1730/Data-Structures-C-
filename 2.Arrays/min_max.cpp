#include<iostream>
using namespace std;
int main()
{
	int a[10],n,choice,max=0,min=0;
	
	cout<<"\nEnter the elements in array";
	for(int i=0;i<10;i++) cin>>a[i]; 
	
	cout<<"\nWhich operation you want to preform";
	cout<<"\n1. Find Maximum element";
	cout<<"\n2. Find Minimum element";
	cin>>choice;
	
	switch(choice)
	{
		case 1: 
		      max=a[0];
		      for(int i=0;i<10;i++)
			  {
				  if(a[i]>max) max=a[i]; 
			  }
			  cout<<"\nMaximum element is "<<max;
			  break; 
	    case 2: 
		      min=a[0];
		      for(int i=0;i<10;i++)
			  {
				  if(a[i]<min) min=a[i]; 
			  }
			  cout<<"\nMinimum element is "<<min;
			  break; 
	    default: cout<<"\nWrong Choice";
	} 
	
}