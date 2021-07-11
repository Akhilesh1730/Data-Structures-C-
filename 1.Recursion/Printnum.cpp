#include<iostream>
using namespace std;
void num(int n)
{
	if(n>=0)
	{
		num(n-1);
		cout<<n<<" ";
        
	}
}
int main()
{
	int n;
	cout<<"Enter the number of terms to be printed";
	cin>>n;
	num(n);
}