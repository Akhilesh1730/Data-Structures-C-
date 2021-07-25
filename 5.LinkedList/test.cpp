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
void reverse()
{
	struct Node *p,*q; 
    p=head;
	
	while(p!=NULL)
	{
		q=p->next;
		p->next=p->prev;
		p->prev=q;
		p=p->prev;
		
		if(p!=NULL && p->next==NULL) head=p;
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
	   	   cout<<"\n Linked List before reverse : ";
	    display(head);
	   reverse();
	   cout<<"\n Linked List after reverse : ";
       display(head);
	   
}