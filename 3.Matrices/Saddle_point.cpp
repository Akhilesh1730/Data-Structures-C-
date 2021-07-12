#include<iostream>
using namespace std;
int main()
{
	int a[3][3],flag=1;
	cout<<"\nEnter 3x3 matrix";
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++) cin>>a[i][j];
	int col_ind=0,i;
	for(i=0;i<3;i++)
	{
		int min=a[i][0],col_ind=0;
		for(int j=0;j<3;j++)
		{
			if(a[i][j]<min) 
			{
				min=a[i][j];
			    col_ind=j;
			}
		}
	int k;
	for(k=0;k<3;k++)
	{
		if(min<a[k][col_ind])
			break;
	}
	
		if(k==3) 
		{
			
			cout<<"\nSaddle point value is "<<min<<" present at index ("<<i<<","<<col_ind<<")";
		    flag=0;
		} 
	}
	if(flag==1)
	{
		cout<<"\nNo saddle point in matrix";
	}
}