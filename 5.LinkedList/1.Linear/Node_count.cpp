#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
}*head=NULL,*temp;
void create()
{
	char ch;
	int n;
	
	struct Node *node;
	do
	{
		cout<<"\nEnter the element in LinkedList : ";
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
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=node;
		}
		cout<<"\nDo you want to enter more element(y/n)";
		cin>>ch;
	}while(ch=='y');
}

void node_count(struct Node *temp1)
{
	int cnt=0;
	while(temp1!=NULL)
	{
		
		cnt++;
		temp1=temp1->next;
	}
	cout<<"\nThere are "<<cnt<<" nodes in LinkedList";
}
int main()
{
	create();
	
	node_count(head);
}