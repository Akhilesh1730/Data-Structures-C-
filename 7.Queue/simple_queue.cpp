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
	
	cout<<"\nEnter the size of queue";
	cin>>q->size;
	q->s=new int[q->size];
	
	q->front=q->rear=-1;
	
	char choice;
	int ch;
	
	
	
	do
	{
	cout<<"\nEnter operation you want to perform on Queue";
	cout<<"\n1.Add elements to the queue";
	cout<<"\n2.Delete element from queue";
	cout<<"\n3.Check queue is empty or not";
	cout<<"\n4.Check queue is Full or not";
	cout<<"\nEnter your choice number";
	cin>>ch;
	int n;
	switch(ch)
	{
		case 1: 
		       int n;
			   cout<<"\nEnter element ";
			   cin>>n;
			   enqueue(q,n);
			   break;
        case 2: 
		       cout<<endl<<"Deleted element : "<<dequeue(q);
			    break;
        
		case 3: 
              if(isEmpty(q)) cout<<"\nEmypt";
              else cout<<"\nNot Empty";
              break;
			  
		case 4: 
              if(isFull(q)) cout<<"\nFull";
              else cout<<"\nNot Full";
               break;
		
       		
	}
	cout<<"\nDo you want to perform another operation(y/Y)";
	cin>>choice;
	}while(choice=='Y' || choice=='y');
}