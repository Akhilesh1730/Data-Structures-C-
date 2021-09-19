#include<iostream>
using namespace std;
int partition(int a[],int l,int h)
{
int t,pivot=a[h];
int i=l-1;
int j;
for(j=l;j<=h-1;j++)
{
if(a[j]<=pivot)
{
i++;
t=a[j];
a[j]=a[i];
a[i]=t;
}
}
t=a[i+1];
a[i+1]=a[j];
a[j]=t;

return i+1;

}
void quicksort(int a[],int l,int h)
{
if(l<h)
{
int p;

p=partition(a,l,h);
quicksort(a,l,p-1);
quicksort(a,p+1,h);
}
}
int main()
{
   int n;
   cout<<"\nEnter the size of the array ";
   cin>>n;
   
   int arr[n];
   
   cout<<"\nEnter the elements in an array ";
   for(int i=0;i<n;i++) cin>>arr[i];
   
   quicksort(arr,0,n-1);
   
   cout<<"\nArray after sorting : ";
   for(int i=0;i<n;i++) cout<<" "<<arr[i];
   
   
}
