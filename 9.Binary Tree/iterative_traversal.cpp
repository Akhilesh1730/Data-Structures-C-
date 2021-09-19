#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
};
class stck
{
    int top;
    node **s;
   
    public:
   
    stck()
    {
        top=-1;
        s=new node*[200];
    }
    int isempty()
    {
        if(top==-1) return -1;
        else return 0;
    }
    void push(node *p)
    {
        top++;
        s[top]=p;
    }
    node* pop()
    {
        return s[top--];
    }
};
class stck1
{
    int top;
    long int s[100];
   
    public:
    stck1()
    {
        top=-1;
    }
   
    int isempty()
    {
        if(top==-1) return 1;
        else return 0;
    }
    void push(long int t)
    {
           top++;
           s[top]=t;
    }
    long int pop()
    {
        return s[top--];
    }
};
class queue
{
    int front,rear;
    node **s;
    public:
   
    queue()
    {
        front=rear=-1;
        s=new node*[100];
    }
   
    int isempty()
    {
        if(front==rear) return 1;
        else return 0;
    }
   
    void push(node *p)
    {
        rear++;
        s[rear]=p;
    }
   
    node* pop()
    {
        front++;
        return s[front];
    }
};

class btree
{
   node *root;
   node *temp;
   public:
   btree()
   {
       root=NULL;
   }
   node* node_create(int n)
   {
       node *nd;
       nd=new node;
       nd->right=NULL;
       nd->left=NULL;
       nd->data=n;
       return nd;
   }
   
   void create()
   {
       queue q;
       int n;
       char ch;
       
       cout<<"\nEnter the root element";
       cin>>n;
       
       root = node_create(n);
       q.push(root);
       
       while(!q.isempty())
       {
            temp=q.pop();
            cout<<"\nDo you want to add right child of (y/n) "<<temp->data;
            cin>>ch;
           
            if(ch=='y')
            {
            cout<<"\nEnter the value";
            cin>>n;
            temp->right=node_create(n);
            q.push(temp->right);
            }
           
            cout<<"\nDo you want to add left child of (y/n) "<<temp->data;
            cin>>ch;
           
            if(ch=='y')
            {
            cout<<"\nEnter the value";
            cin>>n;
            temp->left=node_create(n);
            q.push(temp->left);
            }
           
       }
       
       cout<<"\nTree formation completed";
       
   }
   
   void iter_preorder(node *p)
   {
       stck st;
       while(p!=NULL || !st.isempty())
       {
           if(p!=NULL)
           {
               cout<<" "<<p->data;
               st.push(p);
               p=p->left;
           }
           else
           {
               p=st.pop();
               p=p->right;
             
               
           }
       }
   }
   
   void iter_inorder(node *p)
   {
       stck st;
       
       while(p!=NULL || !st.isempty())
       {
           if(p!=NULL)
           {
               st.push(p);
               p=p->left;
           }
           else
           {
               p=st.pop();
               cout<<" "<<p->data;
               p=p->right;
           }
       }
   }
   void iter_postorder(node *p)
   {
       stck1 st;
       long int temp;
       while(p!=NULL || !st.isempty())
       {
           if(p!=NULL)
           {
               st.push((long int)p);
                p=p->left;      
           }
           else
           {
               temp=st.pop();
               if(temp>0)
               {
                   st.push(-temp);
                   p=((node*)temp)->right;
               }
               else
               {
                   cout<<" "<<((node*)(-1*temp))->data;
                   p=NULL;
               }
           }
           
       }
   }
   void tree_traversals()
   {
       cout<<"\npreorder traversal : ";
       iter_preorder(root);
       cout<<"\ninorder traversal : ";
       iter_inorder(root);
        cout<<"\npostorder traversal : ";
       iter_postorder(root);
   }
};
int main()
{
    btree b;
   
    b.create();
    b.tree_traversals();
   
}
