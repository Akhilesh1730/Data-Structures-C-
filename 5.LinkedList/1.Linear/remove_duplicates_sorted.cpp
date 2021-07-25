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
void remove_duplicates(struct Node *p)
{
	struct Node *q;
	while(p->next!=NULL)
	{
		if(p->data==(p->next)->data)
		{
			q=p->next;
			p->next=(p->next)->next;
			delete q;
			
		}
		else p=p->next;
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
	 remove_duplicates(head);
	 cout<<endl<<"LinkedList after removing Duplicates : ";
	 display(head);
}