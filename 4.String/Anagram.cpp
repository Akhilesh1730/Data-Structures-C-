#include<iostream>
using namespace std;
int main()
{
	char str1[999],str2[999];
	int lett[26],len1=0,len2=0;
	
	for(int i=0;i<26;i++) lett[i]=0;
		
	cout<<"\nEnter string1 : ";
	cin.getline(str1,sizeof(str1));
	
	cout<<"\nEnter string2 : ";
	cin.getline(str2,sizeof(str2));
	
	
	for(;str1[len1]!='\0';len1++);
	for(;str2[len2]!='\0';len2++);
	int flag=1;
	if(len1==len2)
	{
	     for(int i=0;str1[i]!='\0';i++)
		 { 
			 lett[str1[i]-97]++;
		 }
         for(int i=0;str2[i]!='\0';i++)
		 { 
	          if(lett[str2[i]-97]>0) lett[str2[i]-97]--;
		 }		 
		for(int i=0;i<26;i++)
		{
			if(lett[i]!=0) 
			{
				flag=0;
				break;
			}
		}			
		if(flag==1) cout<<"\nGiven strings are anagram";
		else cout<<"\nGiven strings are not anagram";
	}
	else 
		cout<<"\nGiven strings are not anagram";
	
	
}