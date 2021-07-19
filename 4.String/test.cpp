#include<iostream>
using namespace std;
void perm(char s[],int k)
{
	static int A[26]={0};
	static char res[26];
	
	if(s[k]=='\0')
	{
		res[k]='\0';
		cout<<endl<<res;
	}
	else 
	{
		for(int i=0;s[i]!='\0';i++)
		{
			if(A[i]==0) 
			{
		    res[k]=s[i];
			A[i]=1;
			perm(s,k+1);
			A[i]=0;
			}
		}
	}
}
int main()
{
	char str[999];
	cout<<"\nEnter string";
	cin.getline(str,sizeof(str));
	
	perm(str,0);
}