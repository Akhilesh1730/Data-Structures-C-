#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *left;
    node *right;
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
   
   void preorder(node *p)
   {
       if(p)
       {
           cout<<" "<<p->data;
           preorder(p->left);
           preorder(p->right);
       }
   }
   
   void inorder(node *p)
   {
       if(p)
       {
           inorder(p->left);
           cout<<" "<<p->data;
           inorder(p->right);
       }
   }
   
   void postorder(node *p)
   {
       if(p)
       {
           postorder(p->left);
           postorder(p->right);
           cout<<" "<<p->data;
       }
   }
   
   void tree_traversals()
   {
       cout<<"\npreorder traversal : ";
       preorder(root);
       cout<<"\ninorder traversal : ";
       inorder(root);
       cout<<"\npostorder traversal : ";
       postorder(root);
   }
};
int main()
{
    btree b;
   
    b.create();
    b.tree_traversals();
   
}
