#include<iostream>
using namespace std;
int main()
{
	int arr[10],curValue=0,maxValue=0,arrSum=0;
	
	cout<<"\nEnter array";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
		arrSum=arrSum+arr[i];
		curValue=curValue+(i*arr[i]);
	}
	
	maxValue=arrSum;
	
	for(int i=1;i<10;i++)
	{
	    curValue=curValue+arrSum-10*arr[10-i];
        if(curValue>maxValue) maxValue=curValue;		
	}
	
	cout<<endl<<maxValue;
}
