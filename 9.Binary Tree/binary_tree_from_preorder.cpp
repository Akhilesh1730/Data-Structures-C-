#include<iostream>
using namespace std;
class node
{
    public:
    node *left,*right;
    int data;
   
};
class bintree
{
    int inorder[100];
    int preorder[100];
    int in_size;
    int pr_size;
    public:
   
    void insert()
    {
       
        cout<<"\nEnter number of nodes ";
        cin>>in_size;
        pr_size=in_size;
       
        cout<<"\nEnter preorder array";
        for(int pr=0;pr<pr_size;pr++)
        cin>>preorder[pr];
       
        cout<<"\nEnter inorder array";
        for(int in=0;in<in_size;in++)
        cin>>inorder[in];
       
       
       
    }
   
    int search_index(int inS,int inE,int temp)
    {
        int i;
        for(i=inS;i<=inE;i++)
        {
            if(temp==inorder[i]) break;
        }
        return i;
    }
   
    node* create(int inS,int inE)
    {
        static int preind=0;
        if(inS>inE) return NULL;
       
        node *p=new node;
        p->data=preorder[preind++];
       
        if(inS==inE) return p;
       
        int split_index=search_index(inS,inE,p->data);
       
        p->left = create(inS,split_index-1);
        p->right= create(split_index+1,inE);
       
        return p;
    }
   
     void preorder_trav(node *p)
   {
       if(p)
       {
           cout<<" "<<p->data;
           preorder_trav(p->left);
           preorder_trav(p->right);
       }
   }
   
    void traversal()
    {
        node* root=create(0,in_size-1);
        cout<<"\nPreorder : ";
        preorder_trav(root);
    }
   
   
};
int main()
{
    bintree b;
    b.insert();
    b.traversal();
}
