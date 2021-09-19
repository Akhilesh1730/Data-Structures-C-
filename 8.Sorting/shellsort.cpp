#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n;
cout<<"\nEnter size";
cin>>n;

int a[n];
cout<<"\nEnter elements in array";
for(int i=0;i<n;i++) cin>>a[i];

int gap=floor(n/2);
int swap;
while(gap!=0)
{
for(int i=0;i+gap<n;i++)
{

if(a[i]>a[i+gap])
{
swap=a[i];
a[i]=a[i+gap];
a[i+gap]=swap;
int k=i;
while(a[k]<a[k-gap] && k-gap>=0)
{
swap=a[k];
a[k]=a[k-gap];
a[k-gap]=swap;

k--;

}
}
}
  gap=floor(gap/2);
}
cout<<endl;
for(int i=0;i<n;i++) cout<<" "<<a[i];
}