#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
}*head=NULL,*temp,*prev,*last;
void create()
{
	char choice;
	int n;
	struct Node *node;
	do
	{
		cout<<"\nEnter the element ";
		cin>>n;
		
		node = new Node;
		node->data=n;
		node->next=NULL;
		
		if(head==NULL)
		{
			head=node;
			last=head;
		}
		else 
		{
			last->next=node;
			last=node;
		}
	cout<<"\nDo you want to enter more elements(y/n)";
	cin>>choice;
	}while(choice=='y');
}
void reverse(struct Node *p)
{
	struct Node *q=NULL,*r=NULL;
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
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
	cout<<"\nOriginal Linked List : ";
	display(head);
	
	reverse(head);
	
	cout<<"\nLinked List after reversing : ";
	display(head);
	
	 
}