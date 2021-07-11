#include<iostream> 
#include<math.h>
using namespace std;
int fact(int n)
{
	int f=1;
	for(int i=n;i>=0;i--)
	{
		if(i==0) return f=f*1;
		f=f*i; 
	}
}
float taylorex(float x,float n )
{
	if(n==0) return 1;
	else 
	{
		return pow(x,n)/fact(n)+taylorex(x,n-1);
	}
}
int main()
{
	float x,n;
	cout<<"Enter value of x";
	cin>>x;
	cout<<"\nEnter n";
	cin>>n;
	cout<<"\nSeries value is "<<taylorex(x,n);
    
}