#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
}*head=NULL,*temp;
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
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=node;
		}
	cout<<"\nDo you want to enter more elements(y/n)";
	cin>>choice;
	}while(choice=='y');
}
void sum_of_nodes(struct Node *temp1)
{
	int sum=0;
	while(temp1!=NULL)
	{
		sum+=temp1->data;
		temp1=temp1->next;
	}
	cout<<"\nSum of all elements in LinkedList is "<<sum;
}
int main()
{
	create();
	sum_of_nodes(head);
}