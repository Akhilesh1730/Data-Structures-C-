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
void sort_or_not(struct Node *p)
{
	int flag=1;
	while(p->next!=NULL)
	{
		if((p->data)>((p->next)->data)) 
		{
         flag=0;			
		break;
		
		}
		p=p->next;	
	}
	if(flag==1) cout<<"\nLinked List sorted ";
	else 
	{
       flag=1;		
	   p=head;
	   while(p->next!=NULL)
	{
		if((p->data)<((p->next)->data)) 
		{
         flag=0;			
		 break;
		}
		p=p->next;	
	}
	if(flag==1) cout<<"\nLinked List sorted ";
	else cout<<"\nNot sorted";
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
	sort_or_not(head);
	
}