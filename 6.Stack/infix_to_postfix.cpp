#include<iostream>
#include<stdio.h>
using namespace std;
struct stack
{
	int top;
	int size;
	char s[999];
};
void push(struct stack *st,char c)
{
	st->top++;
	st->s[st->top]=c;
}
char pop(struct stack *st)
{
	char t;
	t=st->s[st->top];
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
        if(st->s[i]>=97 && st->s[i]<=122 || st->s[i]>=65 && st->s[i]<=90)
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
				else if(t==')')
				{
					t=pop(st);
					while(t!='(')
					{
						res[j++]=t;
						t=pop(st);
						
					}
					i++;
				}
				else if(precedence(t)>=precedence(st->s[i]))
				{
					res[j++]=t;
					
					if(isEmpty(st))
					{
						push(st,st->s[i]);
						i++;
					}
					else 
					{
						t=pop(st);
						while(precedence(st->s[i])<=precedence(t))
						{
							res[j++]=t;
							if(!isEmpty(st))
							t=pop(st);
						    else break;
						}
						push(st,st->s[i]);
						i++;
					}
				}
				else if(precedence(t)<precedence(st->s[i])) 
				{
					push(st,t);
					push(st,st->s[i]);
				}
			}
		}
	}
	while(!isEmpty(st)) 
	{
		res[j++]=pop(st);
	}
	cout<<res;
}