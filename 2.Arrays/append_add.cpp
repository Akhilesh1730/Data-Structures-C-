#include<iostream>
using namespace std;
int main()
{
	int A[10],len,index;


	cout<<"\nEnter array length you want";
	cin>>len;
	if(len>=10) cout<<"\nSize of array is only 10";
	else{
	cout<<"\nEnter "<<len<<" Elements";
	for(int i=0;i<len;i++) 
		cin>>A[i];
	
		cout<<"\n Enter the element you want to add";
		cin>>A[len];
		len++;
		cout<<endl<<len;
	    cout<<"\nArray after adding Element";	
	   for(int i=0;i<len;i++) 
		cout<<A[i]<<" ";
	} 	 
    
}