#include<iostream>
#include<stdio.h>
using namespace std;
struct stack
{
	int top;
	int size;
	char s[999];
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
void push(struct stack *st,char p)
{
	st->top++;
	st->s[st->top]=p;
}
void pop(struct stack *st)
{
	st->top--;
	st->s[st->top];
}
int main()
{
	struct stack *st;
	st=new stack;
	int flag=0;
	cout<<"\nEnter expression with parenthesis";
	gets(st->s);
	st->top=-1;
	for(int i=0;st->s[i]!='\0';i++)
	{
		if(st->s[i]=='(') push(st,st->s[i]);
		else if(st->s[i]==')') 
		{
			if(isEmpty(st)) 
			{
				flag=1;
				break;
				
			}
           pop(st);
		}
	}
	if(isEmpty(st)) cout<<"\nMatched";
	else if(flag==1 || !isEmpty(st)) cout<<"\nNot matched";
	
}