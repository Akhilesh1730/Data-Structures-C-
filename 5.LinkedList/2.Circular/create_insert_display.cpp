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
void insert()
{
	struct Node *p;
	struct Node *node;
	p=head;
    int pos;
	int n;
	cout<<"\nEnter position starting from 0 where you want to enter element";
	cin>>pos;
	
	cout<<"\nEnter the element ";
	cin>>n;
		
		node = new Node;
		node->data=n;
		node->next=NULL;
		   
	for(int i=0;i<pos-1;i++)
	{
		
		p=p->next;
	}
	if(pos==0)
	{
		node->next=head;
		while(p->next!=head) p=p->next;
		p->next=node;
		head=node;
	}
	else 
	{
		node->next=p->next;
		p->next=node;
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
	   
	   insert(); 
	   cout<<endl;
	          display(head);
}


