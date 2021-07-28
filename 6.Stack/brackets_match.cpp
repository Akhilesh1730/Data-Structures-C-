#include<iostream>
#include<stdio.h>
using namespace std;
struct stack
{
	int top;
	char s[999];
};
int isEmpty(struct stack *st)
{
	if(st->top==-1) return 1;
    else return 0;
}

void push(struct stack *st,char t)
{
	st->top++;
	st->s[st->top]=t;
}
char pop(struct stack *st)
{
	char p=st->s[st->top];
	st->top--;
	return p;
	
}
int main()
{
	struct stack *st;
	st=new stack;
	int flag=0;
	cout<<"\nEnter expression with bracket";
	gets(st->s);
	st->top=-1;
	for(int i=0;st->s[i]!='\0';i++) 
	{
		if(st->s[i]=='(' || st->s[i]=='{' || st->s[i]=='[')
		{
		  	push(st,st->s[i]);	
		}
		else if(st->s[i]==')' || st->s[i]=='}' || st->s[i]==']') 
		{
			if(isEmpty(st)) 
			{
				flag=1;
				break;
			}			
			else 
			{
			   char t=pop(st);
			   if(t=='(' && st->s[i]!=')' || t=='[' && st->s[i]!=']' || t=='{' && st->s[i]!='}') 
			   {
				   flag=1;
				   break;
			   }
			}
		}
	}
	if(flag==1 || !isEmpty(st)) cout<<"\nNot matched";
	else cout<<"\nMatched";
}