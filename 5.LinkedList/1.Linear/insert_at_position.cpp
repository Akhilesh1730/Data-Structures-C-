#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
}*head=NULL,*temp,*prev;
void create()
{
	char choice;
	int n;
	struct Node *node;
	do
	{
		cout<<"\nEnter the element ";
		cin>>n;
		node=new Node;
		node->data=n;
		node->next=NULL;
		
		if(head==NULL)
		{
			head=node;
			temp=head;
		}
		else
		{
			while(temp->next!=NULL) temp=temp->next;
			temp->next=node;
		}
	cout<<"\nDo you want to enter more elements(y/n)";
	cin>>choice;
	}while(choice=='y');
}
void insert(struct Node *temp1)
{
	int num,pos;
	cout<<"\nEnter the index starting from 0 where you want to insert element";
	cin>>pos;
	cout<<"\nEnter the element ypu want to insert at index "<<pos;
	cin>>num;
	struct Node *node;
	node = new Node;
	node->data=num;
	node->next=NULL;
	if(pos==0) 
	{
		node->next=head;
		head=node;
		temp1=head;
	}
	else
	{
		for(int i=1;i<pos;i++)
		{
			
			temp1=temp1->next;
		}
		node->next=temp1->next;
		temp1->next=node	;
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
	insert(head);
	display(head);
}