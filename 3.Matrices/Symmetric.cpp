#include<iostream>
using namespace std;
int main()
{
	int a[3][3],flag=1;
	
	cout<<"\nEnter the 3x3 matrix";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			cin>>a[i][j];
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]!=a[j][i])
			{
				
				flag=0;
				break;
			}
		}
		
		if(flag==0)
		{
			
			cout<<"\nMatrix is not symmetric matrix";
			break;
		}
	}
	if(flag==1) cout<<"\nMatrix is symmetric matrix";
}