#include<iostream>
using namespace std;
class node
{
    public:
    node *left,*right;
    int data;
   
};
class BST
{
    node *root;
    public:
   
 
    void insert()
    {
        int x;
         root=new node;
        root->right=NULL;
        root->left=NULL;
       
     
        cout<<"\nEnter the root element";
        cin>>x;
        root->data=x;
        char ch;
        int n;
        do
        {
            cout<<"\nEnter the element";
            cin>>n;
            create(root,n);
            cout<<"\nElement "<<n<<" inserted successfully";
            cout<<"\nDo you want to add more element";
            cin>>ch;
        }while(ch=='y');
    }
   
    node* create(node *p,int key)
    {
       
       
        if(p==NULL)
        {
           
            node *t=new node;
            t->right=NULL;
            t->left=NULL;
            t->data=key;
            return t;
        }
        else if(key>p->data)
        {
           
           
           p->right=create(p->right,key);
           
           
        }
        else if(key<p->data)
        {
           
            p->left=create(p->left,key);
           
           
        }
       
       
       return p;
       
    }
   
    void search(node *p,int key)
    {
        if(p==NULL)
        {
            cout<<"\nKey not found";
            return;
        }
        else if(p->data==key)
        {
            cout<<"\nKey found";
            return;
        }
        else if(key<p->data)
        {
            search(p->left,key);
        }
        else if(key>p->data)
        {
            search(p->right,key);
        }
        return;
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
   
    int Height(node* p)
    {
        int x,y;
        if(p==NULL) return 0;
       
        x=Height(p->left);
        y=Height(p->right);
       
        return x > y ?x+1:y+1;
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
        return p;
    }
    void bst_operations()
    {
        char ch;
        int c;
       
        do
        {
            cout<<"\nWhich operations you want to perform";
            cout<<"\n1.Insert";
            cout<<"\n2.Search";
            cout<<"\n3.Delete";
            cout<<"\n4.Inorder traversal";
            cout<<"\n5.Who is root";
           
            cin>>c;
            int x;
            switch(c)
            {
                case 1:
                      insert();
                      break;
                case 2:
                       
                      cout<<"\nEnter the value u want to search";
                       cin>>x;
                       search(root,x);
                       break;
                case 3:
                     
                      cout<<"\nEnter the value u want to delete";
                      cin>>x;
                      del(root,x);
                      cout<<"\nElement "<<x<<" deleted successfully";
                      break;
                case 4:
                     inorder(root);
                     break;
               
                case 5:
                      cout<<"\nRoot element is "<<root->data;
                      break;
               
            }
           
                      cout<<"\nDo you want to perform any other operations(y/n)";
                       cin>>ch;
        }while(ch=='y');
    }
};
int main()
{
    BST b;
    b.bst_operations();
}
