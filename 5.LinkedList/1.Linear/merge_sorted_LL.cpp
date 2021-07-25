#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;
struct Node* create()
{
	char choice;
	int n;
	struct Node *node,*temp1,*h=NULL;
	do
	{
		cout<<"\nEnter the element ";
		cin>>n;
        
		node = new Node;
		node->data=n;
		node->next=NULL;
		
		if(h==NULL)
		{
			h=node;
			temp1=h;
			
		}
		else 
		{
			temp1->next=node;
			temp1=node;
		}
	cout<<"\nDo you want to enter more elements(y/n)";
	cin>>choice;
	}while(choice=='y');
	return h;
}
void merge()
{
	struct Node *last=NULL;
	if(first->data < second->data)
	{
		
		last=first;
		third=first;
		first=first->next;
		
	}
	else if(first->data > second->data)
	{
		
		last=second;
		third=second;
		second=second->next;
	}
	else if(first->data == second->data)
	{
	
        last=first;
		
		first=first->next;
		
		last->next=second;
		
		third=last;
		
		last=second;
		
		second=second->next;
	}
	while(first!=NULL && second!=NULL)
	{
		
		if(first->data == second->data)
	    {
              
			  if(last->next==first) 
			  {
				  
				  last->next=second;
				  last=second;
				  second=second->next;
				  
			  }
			  if(last->next==second) 
			  {
				 
				  last->next=first;
				  last=first;
				  first=first->next;
				  
			  }
			  
     	}
		else if(first->data < second->data)
		{
			last->next=first;
			last=first;
			first=first->next;
			
		}
		else if(first->data > second->data)
		{
			last->next=second;
			last=second;
			second=second->next;
			
		}
	}
	if(first!=NULL) last->next=first;
	else last->next=second;
	
		
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
	
	
	cout<<"\nEnter first list : ";
	first=create();
	display(first);
	
	cout<<"\nEnter second list : ";
	second=create();
	display(second);
	
	cout<<"\nList after merging: ";
    merge();
    
    display(third);
	
}