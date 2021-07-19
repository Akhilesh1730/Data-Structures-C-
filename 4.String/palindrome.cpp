#include<iostream>
using namespace std;
int main()
{
	char str[999];
	
	cout<<"\nEnter string";
	cin.getline(str,sizeof(str));
	int i,j;
	for(j=0;str[j]!='\0';j++);
	j=j-1;
	int flag=1;
	for(int i=0;i<j;i++,j--) 
	{
		if(str[i]!=str[j]) 
		{
			flag=0
			break;
		}
	}
	if(flag==0) cout<<"\nString is not palindrome";
    else cout<<"\nString is palindrome";
}
