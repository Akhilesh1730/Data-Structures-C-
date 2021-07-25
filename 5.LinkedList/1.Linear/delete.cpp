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
void delete_node(struct Node *p)
{
	int num;
	cout<<"\nEnter the nth node you want to delete";
	cin>>num;
	
	for(int i=0;i<num-1;i++) p=p->next;
	if(num==0)
	{
		
		head=head->next;
		delete p;
	}
	else 
	{
		
		p->next=(p->next)->next;
		p=p->next;
		delete p;
		
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
	delete_node(head);
	display(head);
}