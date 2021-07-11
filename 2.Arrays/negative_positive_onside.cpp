#include<iostream>
using namespace std;
int main()
{
   int a[100],n,swap;
   cout<<"\nEnter the number of elements you want to enter";
   cin>>n;
   
   cout<<"\nEnter elements in array";
   for(int i=0;i<n;i++) cin>>a[i]; 
   
   int i=0,j=n-1;
   while(i<j)
   {
	   while(a[i]<0) i++;
	   while(a[j]>=0) j--; 
	   if(i<j)
	   {	   
	   swap=a[j];
	   a[j]=a[i];
	   a[i]=swap;
	   }
	   
   }
   cout<<"\nElements in array after arranging"<<endl;
   for(int i=0;i<n;i++) cout<<a[i]<<" "; 
}