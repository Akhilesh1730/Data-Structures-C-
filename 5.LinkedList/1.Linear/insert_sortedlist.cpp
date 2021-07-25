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
void sorted_insert(struct Node *p)
{
	int num;
	cout<<"\nEnter the element you want to insert";
	cin>>num;
	struct Node *node;
	node = new Node;
	node->data=num;
	node->next=NULL;
	while(p->next!=NULL && (p->next)->data<num) 
	{
         p=p->next;		
	}
	node->next=p->next;
	p->next=node;
	
    
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
	sorted_insert(head);
	display(head);
}