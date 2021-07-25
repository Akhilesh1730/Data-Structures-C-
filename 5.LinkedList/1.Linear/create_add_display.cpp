#include<iostream>
using namespace std;
struct Node 
{
	int data;
	struct Node *next;
}*head=NULL,*temp;

void add(int n)
{
	struct Node *node;
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
	
}
/*
void display()
{
	temp=head;
	while(temp!=NULL) 
	{
		cout<<" "<<temp->data;
		temp=temp->next;
	}
}*/
void display(struct Node *temp1)
{
	
	if(temp1==NULL) return;
    else 
	{
		
		cout<<" "<<temp1->data;
		temp1=temp1->next;
		display();
		
	}
}
int main()
{
	char choice;
	int num;
	do 
	{
		cout<<"\nEnter the number in linked list";
		cin>>num;
		add(num);
		cout<<"\nDo you want to add more element(y/n)";
		cin>>choice;
	}while(choice=='y');
	//display();
	//Iterative display
	display(head);
}