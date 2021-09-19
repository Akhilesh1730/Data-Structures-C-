#include<iostream>
using namespace std;
struct Node
{
int data;
struct Node *next;
}*head=NULL;
void insert(struct Node **p,int idx)
{

struct Node *node;
node =new Node;
node->data=idx;
node->next=NULL;


if(p[idx]==NULL)
{
   
p[idx]=node;

}
else
{
struct Node *q;

q=p[idx];
while(q->next!=NULL) q=q->next;
q->next=node;
q=q->next;
}
}
void del(struct Node *p)
{
while(p!=NULL)
{
  cout<<p->data<<" ";
  p=p->next;
}
delete p;
}
int main()
{
int n;
cout<<"\nENter the size of array";
cin>>n;

int arr[n];

cout<<"\nEnter the elements";
for(int i=0;i<n;i++) cin>>arr[i];

int max=-1;
for(int i=0;i<n;i++)
{
   if(arr[i]>max) max=arr[i];
}

cout<<"\nmax is "<<max<<"\n";

    struct Node **bucket;
bucket=new Node*[max+1];

for(int i=0;i<max+1;i++)
{
    bucket[i]=NULL;
}

    for(int i=0;i<n;i++)
{
   int n=arr[i];
    insert(bucket,n);
}
   
    for(int i=0;i<max+1;i++)
    {
    if(bucket[i]!=NULL)
    {
    del(bucket[i]);
}
}
 
 
}