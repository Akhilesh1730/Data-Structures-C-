#include<iostream>
using namespace std;
struct stack 
{
	int top;
	int size;
	int *s;
};
int isEmpty(struct stack *st)
{
	if(st->top==-1) return 1;
	 else return 0;
}
int isFull(struct stack *st)
{
	if(st->top==st->size-1) return 1;
	else return 0;
}
void push(struct stack *st,int num)
{
	if(isFull(st)) cout<<"\nStack full cannot insert more";
	else 
	{
		st->top++;
		st->s[st->top]=num;
	}
}
void pop(struct stack *st)
{
	if(isEmpty(st)) cout<<"\nAlready Empty";
	else 
	{
		cout<<endl<<st->s[st->top]<<" popped out";
		st->top--;
	}
}
void peek(struct stack *st)
{
	int pos;
	
	if(isEmpty(st)) cout<<"\nStack is Empty";
	else 
	{
	cout<<"\nEnter the index ";
	cin>>pos;
	cout<<"\nElement at index "<<pos<<" is "<<st->s[(st->top)-pos+1];
	}
}
int main()
{
	int n,ch;
	char choice;
	struct stack *st;
	int num;
	cout<<"\nhello";
	st=new stack;
	st->top=-1;
	cout<<"\nEnter number of elements you want to enter";
	cin>>st->size;
		cout<<"\nhello";
	st->s=new int[st->size];
	do
	{
		cout<<"\nEnter the operation which you want to preform";
		cout<<"\n1.Want to check stack empty or not?";
		cout<<"\n2.Want to check stack full or not?";
		cout<<"\n3.Push element in stack";
		cout<<"\n4.Pop element from stack";
		cout<<"\n5.Peek operation";
	    cout<<"\nEnter your choice";
		cin>>ch;
		switch(ch)
		{
			case 1: 
			       if(isEmpty(st)) cout<<"\nEmpty";
				   else cout<<"\nNot empty";
				   break;
				   
		    case 2: 
			       if(isFull(st)) cout<<"\nStack Full";
				   else cout<<"\nNot Full";
				   break;
			case 3:  
			       cout<<"\nEnter element you want to push";
				   cin>>num;
				   push(st,num);
				   break;
			case 4: 
			        pop(st);
			        break;
			case 5: 
			       peek(st);
		           break;
		}
		cout<<"\nDo you want to perform any operation again(y/n)";
		cin>>choice;
	}while(choice=='y' || choice=='Y');
}