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
	
	for(int i=1;i<3;i++)
	{
		for(int j=1;j<3;j++)
			if(a[i][j]!=a[i-1][j-1])
			{
				cout<<"\n Not a Toeplitz matrix";
				flag = 0;
				break;
			}
		if(flag==0) break;	
	}
	if(flag==1) cout<<"\nIs a toplitz matrix";
}