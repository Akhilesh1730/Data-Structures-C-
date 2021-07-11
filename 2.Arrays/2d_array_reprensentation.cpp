#include<iostream>
using namespace std;

int main()
{   
    //direct method
	/*
	int a[5][5];
	cout<<"Enter the values of array";
	for(int i=0;i<3;i++)
	{
		 for(int j=0;j<3;j++)
		 {
			 cin>>a[i][j];
		 }
	}
	for(int i=0;i<3;i++)
	{
		cout<<"\n";
		 for(int j=0;j<3;j++)
		 {
			 cout<<" "<<a[i][j];
		 }
	}*/ 
	
	//Using single pointer
	/*int *a[3];
	a[0]=new int(3);
	a[1]=new int(3);
	a[2]=new int(3);
   
	cout<<"Enter the values of array";
	for(int i=0;i<3;i++)
	{
		 for(int j=0;j<3;j++)
		 {
			 cin>>a[i][j];
		 }
	}
	for(int i=0;i<3;i++)
	{
		cout<<"\n";
		 for(int j=0;j<3;j++)
		 {
			 cout<<" "<<a[i][j];
		 }
	}*/
	//USING TWO POINTER 
	/*int **a;
	a=new int*();
	a[0]=new int(3);
	a[1]=new int(3);
	a[2]=new int(3);
	
	cout<<"Enter the values of array";
	for(int i=0;i<3;i++)
	{
		 for(int j=0;j<3;j++)
		 {
			 cin>>a[i][j];
		 }
	}
	for(int i=0;i<3;i++)
	{
		cout<<"\n";
		 for(int j=0;j<3;j++)
		 {
			 cout<<" "<<a[i][j];
		 }
	}*/
	
}