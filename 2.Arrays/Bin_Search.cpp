#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int a[10],key,low=0,high=9,mid=0;
	int flag=0;
	cout<<"\nEnter the elements in array";
	for(int i=0;i<10;i++) cin>>a[i]; 
	
	cout<<"\nEnter the element you want to search";
	cin>>key; 
    
     while(low<=high)
	 {    
         mid=(low+high)/2;
         if(key==a[mid]) 
			{ 
            cout<<"\nElement found at "<<mid+1;
             flag=1;
             break;		     
            }
        else if(key>a[mid]) low=mid+1;
		else high=mid-1;
	}
   if(flag==0) cout<<endl<<"not found";
    
}