#include<iostream>
using namespace std;
int main()
{
	char str1[999],str2[999];
	
	cout<<"\nEnter String 1(case sensitive)";
	cin.getline(str1,sizeof(str1));
	
	cout<<"\nEnter String 2(case sensitive)";
	cin.getline(str2,sizeof(str2));
	int j=0,i=0;
	for(i=0;(str1[i]!='\0' && str2[j]!='\0');i++,j++) 
	{
		if(str1[i]!=str2[j]) break; 
	}
	if(str1[i]==str2[j]) cout<<endl<<"Both strings are equal";
	else cout<<"\nStrings are not equal"; 
	
	
}