#include<iostream>
using namespace std;
class node
{
   public:
   node *left,*right;
   int data;
};
class AVL
{
node *root;
public:
    node* create_node(int p)
    {
    node* t;
    t=new node;
    t->left=NULL;
    t->right=NULL;
    t->data=p;
    return t;
}
int Height(node *p)
{
int x,y;
if(p==NULL) return 0;

x=Height(p->left);
y=Height(p->right);

return x>y?x+1:y+1;
}

   
 node *LL_rot(node *y)
 {
    node *x = y->left;
    node *T2 = x->right;
 
    // Perform rotation
    x->right = y;
    y->left = T2;
 
   
 
    // Return new root
    return x;
   }

node* RR_rot(node *x)
{
node *y = x->right;
    node *T2 = y->left;
 
    // Perform rotation
    y->left = x;
    x->right = T2;
 
   
    // Return new root
    return y;
}



int balance_factor(node *p)
{
int x,y;
if(p==NULL) return 0;

x=Height(p->left);
y=Height(p->right);

return x-y;

}

 node* inord_pred(node* p)
    {
        while(p!=NULL && p->right!=NULL)
        p=p->right;
       
        return p;
    }
   
 node* inord_succ(node* p)
    {
        while(p!=NULL && p->left!=NULL)
        p=p->left;
       
        return p;
    }

node* del(node* p,int key)
    {
        node* q;
        if(p==NULL)
        {
           
            return NULL;
        }
        if(p->right==NULL && p->left==NULL)
        {
            if(p==root) root=NULL;
            delete p;
            return NULL;
        }
       
        if(key<p->data)
        {
            p->left=del(p->left,key);
        }
        else if(key>p->data)
        {
            p->right=del(p->right,key);
        }
        else
        {
            if(Height(p->left)>Height(p->right))
            {
                q=inord_pred(p->left);
                p->data=q->data;
                p->left=del(p->left,q->data);
            }
            else
            {
                q=inord_succ(p->right);
                p->data=q->data;
                p->right=del(p->right,q->data);
            }
        }
        
        int bf=balance_factor(p);
        
        if(bf>1 && balance_factor(p->left)>=0) 
        {
            cout<<"\nLeft Left rotation";
            return LL_rot(p);
        }
        if(bf>1 && balance_factor(p->left)<0)
        {
            cout<<"\nLeft right rotation";
             p->left=RR_rot(p->left);
            return LL_rot(p);
            
        }
        if(bf<-1 && balance_factor(p->right)<=0)
        {
            cout<<"\nRight Right rotation";
            return RR_rot(p);
        }
        if(bf<-1 && balance_factor(p->right)>0)
        {
             cout<<"\nRight Left rotation";
             p->right=LL_rot(p->right);
             return RR_rot(p);
        }
        return p;
    }
    
node* create_tree(node* p,int key)
{
if(p==NULL)
{
node *t;
t=create_node(key);

  return t;
   }
   else if(key>p->data)
   {
    p->right=create_tree(p->right,key);
   
}
else if(key<p->data)
{
p->left=create_tree(p->left,key);
}


int bf=balance_factor(p);


if(bf>1 && key<p->left->data)
{
 cout<<"\nLeft Left rotation";  
 return LL_rot(p);
}
if(bf<-1 && key>p->right->data)
{
  cout<<"\nRight Right rotation";
  return RR_rot(p);
}
if(bf>1 && key>p->left->data)
{
     cout<<"\nLeft Right rotation";
   p->left=RR_rot(p->left);
   return LL_rot(p);
}

if(bf<-1 && key<p->right->data)
{
     cout<<"\nRight Left rotation";
   p->right=LL_rot(p->right);
   return RR_rot(p);
}

return p;
}
void insert()
{
char ch;
int x;

cout<<"\nAdd root element";
cin>>x;
root=create_node(x);

do
{
cout<<"\nEnter element ";
cin>>x;
root=create_tree(root,x);
cout<<"\nElement "<<x<<" added successfully";

cout<<"\nDo you want to add more elements(y/n)";
cin>>ch;
}while(ch=='y');

}

void inorder(node *p)
{
if(p!=NULL)
{
inorder(p->left);
cout<<" "<<p->data;
inorder(p->right);
}
}
void AVL_operations()
{
char ch;
int temp;
do
{

cout<<"\nWhich operation you want to perform";
cout<<"\n1. Insert";
cout<<"\n2. Delete";

cout<<"\n3.Inorder traversal";
cin>>temp;

switch(temp)
{
case 1:
 insert();
   break;
 case 2 :
    int x;
    cout<<"\nEnter element you want to delete ";
    cin>>x;
    root=del(root,x);
    cout<<"\nElement "<<x<<" deleted successfully ";
    break;
case 3 :
    cout<<"\nInorder traversal is ";
    inorder(root);
    break;
}

cout<<"\nDo you want to perform more operations ";
cin>>ch;
}while(ch=='y');
}
};

int main()
{
AVL a;
a.AVL_operations();
}
