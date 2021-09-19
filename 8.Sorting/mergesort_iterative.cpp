#include<iostream>
#include<math.h>
using namespace std;
int merging(int a[],int l,int mid,int h)
{
int brr[100];
int k=l;
int i,j;
i=l;
j=mid+1;
while(i<=mid && j<=h)
{

if(a[i]<=a[j])
{
brr[k++]=a[i++];
}
else if(a[i]>a[j])
{
brr[k++]=a[j++];
}


}
for(;i<=mid;i++) brr[k++]=a[i];
for(;j<=h;j++) brr[k++]=a[j];

for(int m=l;m<=h;m++)
a[m]=brr[m];
}
void mergesort(int a[],int n)
{
int i,mid,p,l,h;
for(p=2;p<=n;p=p*2)
{
for(i=0;i+p-1<n;i=i+p)
{
l=i;
h=i+p-1;
mid=floor((l+h)/2);
merging(a,l,mid,h);

}
}
if(p/2<n)
{

   merging(a,0,p/2-1,n-1);
   
}
}
int main()
{
int n;
cout<<"\nENter the size of array";
cin>>n;


int arr[n];

cout<<"\nEnter "<<n<<" ELements";
for(int i=0;i<n;i++) cin>>arr[i];

mergesort(arr,n);

    cout<<"\nAfter sorting : ";
    for(int i=0;i<n;i++) cout<<" "<<arr[i];
}
