#include<iostream>
using namespace std;
struct queue
{
	int front;
	int rear;
	int *s;
	int size;
};
int isFull(struct queue *q)
{
	if(q->rear==q->size-1) return 1;
	else return 0;
}
int isEmpty(struct queue *q)
{
	if(q->front==q->rear) return 1;
	else return 0;
}
void enqueue(struct queue *q,int n)
{
	if(isFull(q)) cout<<"\nQueue is full";
	else
	{
		q->rear++;
		q->s[q->rear]=n;
	}
		
}
int dequeue(struct queue *q)
{
	if(isEmpty(q)) cout<<"\nQueue is Empty";
	else
	{
		
		q->front++;
		int t=q->s[q->front];
		return t;
	}
}
int main()
{
	struct queue *q;
    q=new queue;
	q->size=10;
	q->s=new int[q->size];
	
	q->front=q->rear=-1;
	char choice;
	int ch;
	int arr[10];
	
	cout<<"\nEnter any 10 numbers";
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	
	int temp=0;
	for(int i=0;i<10;i++)
	{
		
		if(isEmpty(q)) 
		{
			enqueue(q,arr[i]);
		}
		else 
		{
			temp=0;
			while(q->s[temp]>=arr[i] && temp<=q->rear)
			{
				
				temp++;
			}
			
			q->rear++;
			
			for(int j=q->rear;j>temp;j--)
			    q->s[j]=q->s[j-1];
			
			q->s[temp]=arr[i];
		}
	}
	cout<<"\nNumbers printed in decreasing priority : ";
	while(q->front!=q->rear)
	{
		q->front++;
		cout<<"\n"<<q->s[q->front];
	}
}