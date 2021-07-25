#include<iostream>
using namespace std;
struct Node
{
	struct Node *prev;
	int data;
	struct Node *next;
}*head=NULL;
void create()
{
	char choice;
	int n;
	struct Node *node,*temp1;
	do
	{
		cout<<"\nEnter the element ";
		cin>>n;
		
		node = new Node;
		node->data=n;
		node->next=NULL;
		node->prev=NULL;
		
		if(head==NULL)
		{
			
			head=node;
			temp1=head;
			
		}
		else
		{
			temp1->next=node;
			node->prev=temp1;
			temp1=node;
			
		}
       
		
	cout<<"\nDo you want to enter more elements(y/n)";
	cin>>choice;
	}while(choice=='y');
    
}
void insert()
{
	struct Node *node,*p=head; 
	int pos,n;
	p=head;
	cout<<"\nEnter the position staring from 0 where you want to enter element ";
	cin>>pos;
	
	cout<<"\nEnter the element ";
	cin>>n;
		
		node = new Node;
		node->data=n;
		node->next=NULL;
		node->prev=NULL;
    
	if(pos==0)
	{
		head->prev=node;
		node->next=head;
		head=node;	
	}
	else
	{
		for(int i=0;i<pos-1;i++)
		{
			p=p->next;
			
		}
		node->next=p->next;
		node->prev=p;
		if(p->next)
		p->next->prev=node;
		
		p->next=node;
	}
}
void display(struct Node *p)
{
  while(p!=NULL)
  {
	  cout<<" "<<p->data;
	  p=p->next;
  }
}
int main()
{
       create();
	    display(head);
	    insert();
       display(head);
	   
}