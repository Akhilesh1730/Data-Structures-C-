#include<iostream>
using namespace std;
class node;
class stack
{
  
     int top;
     
       public:
       	node* s[100];
     int getTop()
     {
     	return top;
	 }
     stack()
     {
         top=-1;
       
     }
     
     
     int isempty()
     {
         if(top==-1) return 1;
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
class node
{
    public:
    node *left,*right;
    int data;
};
class BST
{
    int pre[100];
    int n;
    node* root;
    stack st;
    public:
   
    node* create_node(int p)
    {
        node* t;
        t=new node;
        t->right=NULL;
        t->left=NULL;
        t->data=p;
        return t;
    }
   
    void create_tree()
    {
        cout<<"\nEnter the number of nodes first";
        cin>>n;
       
        cout<<"\nEnter preorder array";
        for(int i=0;i<n;i++)
        cin>>pre[i];
       
        root=create_node(pre[0]);
        node *p,*t;
        p=root;
        
        int j=1;
        while(j<n)
        {
        
            if(pre[j]<p->data)
            {
            	
                t=create_node(pre[j]);
                p->left=t;
                st.push(p);
               
                p=t;
                
                j++;
            }
            else
            {
            	
            	 
            	
                if((pre[j]>p->data) && (pre[j]< (st.isempty() ? INT_MAX : st.s[st.getTop()]->data)))
                {
                    t=create_node(pre[j]);
                    p->right=t;
                    
                    p=t;
                   
                    j++;
                    
                }
                else
                {
                	
                    p=st.pop();
                    
                   
                }
            }
           
        }
        cout<<"\nTree created successfully";
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
    void traversal()
    {
        cout<<"\nInorder traversal ";
        inorder(root);
    }
};
int main()
{
    BST b;
    b.create_tree();
    b.traversal();
}
