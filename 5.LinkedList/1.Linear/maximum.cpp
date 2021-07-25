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
void max(struct Node *temp1)
{
	int max=temp1->data;
	while(temp1!=NULL)
	{
		if(max<temp1->data) max=temp1->data;
		temp1=temp1->next;
	}
	cout<<"\nMaximum element in Linked list is "<<max;
}
int main()
{
	create();
	max(head);
}