#include<iostream>
using namespace std;
int main()
{

	
	char str[999];
	int cap[26],small[26];
	
	cout<<"\nEnter the string : ";
	cin.getline(str,sizeof(str));
	
	for(int i=0;i<26;i++)
	{
		cap[i]=0;
		small[i]=0;
	}
	int t1;
	for(int i=0;str[i]!='\0';i++)
	{
		t1=str[i];
		if(t1>=97 && t1<=122)
		{
			t1=t1-97;
			small[t1]++;
		}
		else if(t1>=65 && t1<=90)
		{
			t1=t1-65;
			cap[t1]++;
		}
	}
	char t2;
	cout<<t2;
	for(int i=0;i<26;i++)
	{
		if(cap[i]!=0) 
		{
			t2=i+65;
			cout<<"\nLetter "<<t2<<" is reapeated "<<cap[i]<<" times";
		}
		if(small[i]!=0) 
		{
			t2=i+97;
			cout<<"\nLetter "<<t2<<" is reapeated "<<small[i]<<" times";
		
		}
	}
	cout<<endl;
	cout<<endl<<"Duplicates in strings are : ";
	for(int i=0;i<26;i++)
	{
		if(cap[i]>1) 
		{
			t2=i+65;
			cout<<"\nLetter "<<t2;
		}
		if(small[i]>1) 
		{
			t2=i+97;
			cout<<"\nLetter "<<t2;
		}
	} 
}
