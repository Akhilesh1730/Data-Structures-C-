#include<iostream>
#include<string>
using namespace std;
int main()
{
	char name[]="My Name is Akhilesh Dhore";
	int i;
	for(i=0;name[i]!='\0';i++);
	
	cout<<"\nLength of string "<<name<<" is "<<i;
}