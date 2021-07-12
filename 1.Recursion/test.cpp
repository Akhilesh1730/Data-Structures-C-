#include<iostream>
using namespace std; 
int toh(int n,int f,int u,int t)
{
    if(n>0)
    {
		toh(n-1,f,t,u);
		cout<<endl<<"move from "<<f<<" to "<<t;
		toh(n-1,u,f,t);
	}		
}
int main()
{
	int n,from=1,to=3,use=2;
	cout<<"Enter number of disks";
	cin>>n;
	toh(n,from,use,to);
}