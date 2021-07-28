#include<iostream>
#include<stdio.h>
using namespace std;
struct stack
{
	int top;
	int size;
	char s[999];
	float eval[999];
};
void push(struct stack *st,char c)
{
	st->top++;
	st->s[st->top]=c;
}
void push1(struct stack *st,float c)
{
	st->top++;
	st->eval[st->top]=c;
}
char pop(struct stack *st)
{
	char t;
	t=st->s[st->top];
	st->top--;
	return t;
}
float pop1(struct stack *st)
{
	float t;
	t=st->eval[st->top];
	st->top--;
	return t;
}
int isEmpty(struct stack *st)
{
	if(st->top==-1) return 1;
	else return 0;
}
int precedence(char c)
{
	
	if(c=='*' || c=='/') return 2;
	else if(c=='+' || c=='-') return 1;
	
}
float oper(char ch,float n1,float n2)
{
	switch(ch)
	{
		case '*': return n1*n2;
		case '/': return n1/n2;
		case '-': return n1-n2;
		case '+': return n1+n2;		
	}
}
int main()
{
	struct stack *st;
	st = new stack;
	st->top=-1;
	char res[999];
	int j=0;
	cout<<"\nEnter the infix expression(use only parenthesis not other brackets) ";
	gets(st->s);
	int i=0;
	char c=99;
	char t;
	while(st->s[i]!='\0')
	{
        if(st->s[i]>=97 && st->s[i]<=122 || st->s[i]>=65 && st->s[i]<=90 || st->s[i]>=48 && st->s[i]<=57 )
		{
			
			res[j++]=st->s[i++];
			
		}
		else if(st->s[i]=='(')
		{
			
			push(st,st->s[i]);
			i++;
		}
		else if(st->s[i]==')')
		{
			t=pop(st);
			while(t!='(')
			{
				res[j++]=t;
				
				t=pop(st);
				
			}
			i++;
		}
		else if(st->s[i]=='*' || st->s[i]=='/' || st->s[i]=='+' || st->s[i]=='-')
		{
			if(isEmpty(st))
			{		
                   		
		          push(st,st->s[i]);
				  i++;
			}
			else
			{
				t=pop(st);
				if(t=='(')
				{
					push(st,t);
					push(st,st->s[i]);
					i++;
				}
				else if(precedence(t)>=precedence(st->s[i]))
				{
					
					res[j++]=t;
					push(st,st->s[i]);
					i++;
				}
				else if(precedence(t)<precedence(st->s[i])) 
				{
					push(st,t);
					push(st,st->s[i]);
					i++;
				}
			}
		}
	}
	
	while(!isEmpty(st)) 
	{
		res[j++]=pop(st);
	}
	res[j]='\0';
	cout<<res;
	cout<<endl<<pop(st);
	st->top=-1;
	
	
	i=0;
	
    while(res[i]!='\0')
	{
		
         if(res[i]>=48 && res[i]<=57)
		 {
			
			 push1(st,res[i]-'0');
			 i++;
		 }
	     else if(res[i]=='*' || res[i]=='/' || res[i]=='+' || res[i]=='-')
		 {
		      float t2=pop1(st);
			  float t1=pop1(st);			   
			  push1(st,oper(res[i],t1,t2));
			  i++;
		 }
		 
	}
	cout<<"\nExpression value ";
	cout<<pop1(st);
}