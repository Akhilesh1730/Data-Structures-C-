#include<iostream>
using namespace std;
int power(int x,int y)
{
	if(y==0) 
		return 1;
	else 
		return x*power(x,y-1);
}
int main()
{
	int x,y;
	cout<<"Enter the number";
	cin>>x;
	cout<<"\nEnter the power of number ";
	cin>>y;
	cout<<"\npower of "<<x<<" is"<<power(x,y);
}