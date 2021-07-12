#include<iostream>
using namespace std;
int main()
{   
    //SHIFTING AND INSERTING 
	/*
	int a[10],ind,len,n;
	cout<<"\nEnter the number of elements you want to enter in array of size 10";
	cin>>len;
	if(len>10) cout<<"Array size is only 10";
	else
	{
	 
	cout<<"\nEnter "<<len<<" Elements";
	for(int i=0;i<len;i++)  cin>>a[i];
	
	cout<<"\n"<<len<<" Elements are";
	for(int i=0;i<len;i++)  cout<<a[i]<<" ";
	
	if(len>=10) cout<<endl<<"Array is full no more entries possible";
	else
	{
	cout<<"\nENter the position where you want to add element";
	cin>>ind; 
	ind--;
	cout<<"\nEnter the element you want to add at position "<<ind+1;
	cin>>n;
	
	len++; 
	
	for(int i=len-1;i>=ind;i--)
	{
		a[i+1]=a[i];
	}
	a[ind]=n; 
	
	cout<<"\n"<<len<<" Elements are ";
	for(int i=0;i<len;i++)  cout<<a[i]<<" ";
	
	}
	
	}*/
	
	//ADDING ELEMENT BY REPLACING ORIGINAL VALUE
	/*
	int a[10],ind,n; 
	 
	cout<<"\nEnter 10 Elements";
	for(int i=0;i<10;i++)  cin>>a[i];
	
	cout<<"\n"<<"10 Elements are";
	for(int i=0;i<10;i++)  cout<<a[i]<<" "; 
	
	cout<<"\nENter the position where you want to add element";
	cin>>ind; 
	ind--; 
	
	cout<<"\nEnter the element you want to add at position "<<ind+1;
	cin>>n; 
	
	a[ind]=n; 
	
	cout<<"\n Elements are ";
	for(int i=0;i<10;i++)  cout<<a[i]<<" ";
	
	
	*/
	
	
}