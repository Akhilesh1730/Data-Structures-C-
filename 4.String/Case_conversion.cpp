#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

    char *name;
	name=new char[100];
	cout<<"\nENter your name";
	gets(name);
	for(int i=0;name[i]!='\0';i++)
	{
		
		if(name[i]>=65 && name[i]<=90) name[i]+=32;
		else if(name[i]>='a' && name[i]<='z') name[i]-=32;
		
	}
	cout<<"\nString after conversion is "<<name;
}
