#include<iostream>
using namespace std;
struct Node
{
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
		
		if(head==NULL)
		{
			head=node;
			temp1=head;
			temp1->next=head;
		}
		else
		{
			temp1->next=NULL;
			temp1->next=node;
			temp1=node;
			temp1->next=head;
		}
       
		
	cout<<"\nDo you want to enter more elements(y/n)";
	cin>>choice;
	}while(choice=='y');
    
}
void delete_node()
{
	struct Node *p,*q;
	p=head;
    int pos;
	int n;
	cout<<"\nEnter node position starting from 0 which you want to delete";
	cin>>pos;
	

	for(int i=0;i<pos-1;i++)
	{
		
		p=p->next;
	}
	if(pos==0)
	{
       
		while(p->next!=head) p=p->next;
		q=p->next;
		p->next=p->next->next;
		head=p->next;
		delete q;
	}
	else 
	{
		q=p->next;
		p->next=p->next->next;
	    delete q;
	}
}
void display(struct Node *p)
{
	do
	{
		cout<<" "<<p->data;
		p=p->next;
	}while(p!=head);
}
int main()
{
       create();
       display(head);
	   
	   delete_node();
	   cout<<endl;
	          display(head);
}