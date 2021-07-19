#include<iostream>
using namespace std;
int main()
{
	char name[999];
	char t;
	cout<<"\nEnter your name";
	int n=sizeof(name);
	cin.getline(name,sizeof(name));
	int i=0,j=0;
	for(j=0;name[j]!='\0';j++);
	j=j-1;
	for(i=0;i<j;i++,j--)
	{
		t=name[i];
		name[i]=name[j];
		name[j]=t;
	}
	
	cout<<"\nReverse string is "<<name;
}