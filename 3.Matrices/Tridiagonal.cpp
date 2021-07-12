#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int a[3][3],flag=1;
	cout<<"\nEnter the matrix";
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++) cin>>a[i][j];
	
	for(int i=0;i<3;i++)
	{
	   for(int j=0;j<3;j++)
	   {
		   if(abs(i-j)<=1 && a[i][j]==0)
		   {
			   flag=0;
			   break;
		   }
		   else if(abs(i-j)>1 && a[i][j]!=0)
		   {
			   flag=0;
			   break;
		   }
	   }		   
	   if(flag==0)
	   {
		   cout<<"\nMatrix is not Tridiagonal";
		   break;
	   }
	}
		   if(flag==1)
	   {
		   cout<<"\nMatrix is Tridiagonal";
	   }
}