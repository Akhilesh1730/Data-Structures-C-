#include<iostream>
using namespace std;
int main()
{
	int a[10],n,choice;
	float sum=0,avg=0;
	cout<<"\nEnter the elements in array";
	for(int i=0;i<10;i++) cin>>a[i]; 
	
	cout<<"\nWhich operation you want to preform";
	cout<<"\n1. Find Sum of elements";
	cout<<"\n2. Find Average of elements";
	cin>>choice;
	
	switch(choice)
	{
		case 1: 
		      
		      for(int i=0;i<10;i++)
			  {
				  sum+=a[i]; 
			  }
			  cout<<"\nSum is "<<max;
			  break; 
	    case 2: 
		      avg=0;
		      for(int i=0;i<10;i++)
			  {
				  sum+=a[i]; 
			  }
			  avg=sum/10;
			  cout<<"\nAverage is "<<min;
			  break; 
	    default: cout<<"\nWrong Choice";
	} 
	
}