#include<iostream>
using namespace std;
int main()
{
	char name[999];
	cout<<"\nEnter your name";
	cin.getline(name,sizeof(name));
	
	int vowel=0,cons=0,word=1;
	
	for(int i=0;name[i]!='\0';i++)
	{
		if(name[i]=='a' || name[i]=='A' || name[i]=='e' || name[i]=='E' || name[i]=='i' || name[i]=='I' || name[i]=='O' || name[i]=='o' || name[i]=='U' || name[i]=='u')
		{
			vowel++;
		}
		else if((name[i]>=65 && name[i]<=90) || (name[i]>=97 && name[i]<=122)) cons++;

	}
	for(int i=0;name[i]!='\0';i++)
	{
	    if(name[i]==' ' && name[i-1]!=' ') word++;
	}
	
	cout<<"\nName is "<<name;
	cout<<"\nNo of vowels in given string : "<<vowel;
	cout<<"\nNo of consonants in given string : "<<cons;
	cout<<"\nNo . of words in given string : "<<word;
	
	
}