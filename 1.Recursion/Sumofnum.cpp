#include<iostream>
using namespace std;
int fun(int n)
{
	if(n>0)
	{
		return n+fun(n-1);
	}
	return 0;
}
int main()
{
	int n;
	cout<<"Enter the value";
	cin>>n;
	int sum=fun(n);
	cout<<"\nSum is "<<sum;
}