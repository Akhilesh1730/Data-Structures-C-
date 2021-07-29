#include<iostream>
using namespace std;
struct queue
{
	int front;
	int rear;
	int size;
	int *s;
};
int isEmpty(struct queue *q)
{
	if(q->front==q->rear) return 1;
	else return 0;
}
int isFull(struct queue *q)
{
	if((q->rear+1)%q->size==q->front) return 1;
	else return 0;
}
void enqueue(struct queue *q)
{
	int n;
	if(isFull(q)) cout<<"\nQueue is Full";
	else 
	{
		cout<<"\nEnter the element";
		cin>>n;
		q->rear=(q->rear + 1) % q->size;
		cout<<endl<<q->rear<<endl;
		q->s[q->rear]=n;
		
	}
}
int dequeue(struct queue *q)
{
	if(isEmpty(q)) cout<<"\nQueue is Empty";
	else
	{
		q->front=(q->front+1)%q->size;
		int t=q->s[q->front];
		 cout<<"\nDeleted element is "<<t;
		
		return t;
	}
}
int main()
{
	struct queue *q;
    q=new queue;
	
	cout<<"\nEnter the size of queue";
	cin>>q->size;
	q->size=q->size+1;
	q->s=new int[q->size];
	
	q->front=q->rear=0;
	
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
		       
			   
		       enqueue(q);
			   break;
        case 2: 
		       dequeue(q);
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