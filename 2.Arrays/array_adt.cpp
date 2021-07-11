#include<iostream>
using namespace std;
struct array
{
	int *A;
	int size;
	int len;
};
struct array init()
{
	struct array arr;
	cout<<"Enter the size of Array ";
	cin>>arr.size;
	arr.A=new int(arr.size);
	arr.len=0;
	return arr;
}
struct array get()
{
	struct array arr;
	arr=init();
	int n;
	cout<<"Enter number of elements you want to enter";
	cin>>n;
	arr.len=n;
	cout<<"\nEnter the elements in array";
	for(int i=0;i<arr.len;i++)
	{
		cin>>arr.A[i];
	}
	return arr;
}
void display(struct array arr)
{
		cout<<endl<<"Elements in array";
	for(int i=0;i<arr.len;i++)
	{
		cout<<endl<<arr.A[i];
	}
}
int main()
{
	 
	struct array arr;
	arr=get();
	display(arr);
    
}