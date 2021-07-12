#include<iostream>
using namespace std;
int main()
{
	int a[5][5],flag=1;
	cout<<"\nENter the 5x5 matrix";
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
			cin>>a[i][j];
	}
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i==j && a[i][j]==0) 
			{  
				flag=0;
				break;
			}
			else if(i!=j && a[i][j]!=0) 
			{
				flag=0;
				break;
			}
			
		}
		if(flag==0) break;
	}
	
	if(flag==0) cout<<"\nMatrix is not diagonal matrix";
    else cout<<"\nMatrix is diagonal matrix";	
}