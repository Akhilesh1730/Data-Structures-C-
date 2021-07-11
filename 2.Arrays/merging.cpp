#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int b[]={1,3,5,7};
	int c[]={2,4,6,8};
	
	int m=4,n=4,i=0,j=0,k=0;
	while(i<m && j<n)
	{
		if(b[i]<c[j]) a[k++]=b[i++];
		else a[k++]=c[j++];
		
	}	

	while(j<n) a[k++]=c[j++];
	while(i<m) a[k++]=b[i++];
	int len=m+n;
	cout<<"\nNew array after merging is"<<endl;
	for(int i=0;i<len;i++) cout<<" "<<a[i]; 
	
}