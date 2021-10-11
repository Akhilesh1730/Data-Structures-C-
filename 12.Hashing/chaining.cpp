#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    public:
    
};
class Hash
{
    int keys[10];
    Node *hash_table[10];
    Node* Head=NULL;
    public:
    Hash()
    {
        for(int i=0;i<10;i++)
        {
            hash_table[i]=NULL;
        }
    }
    Node* getNode(int n)
    {
        Node *node=new Node;
        node->next=NULL;
        node->data=n;
        return node;
    }
   
   int hash_fun(int t)
   {
       int res=t%10;
       return res;
   }
 
   void Del()
   {
       int x;
       Node *p,*prev;
       cout<<"\nEnter key to delete";
       cin>>x;
       
       int h=hash_fun(x);
       
       p=hash_table[h];
       
       while(p!=NULL && p->data!=x)
       {
           prev=p;
           p=p->next;
           
       }
       
       if(p==NULL) cout<<"\nKey not found";
       else
       {
           if(p==hash_table[h]) 
           {
               hash_table[h]=p->next;
           }
           else
           {
               prev->next=p->next;
               delete p;
           }
          
          cout<<"\n"<<x<<" deleted successfully";
       }
   }
   void insert_node(int index,int key)
   {
       Node *prev,*p;
       
       if(hash_table[index]==NULL)
       {
           p=getNode(key);
           
           hash_table[index]=p;
           
       }
       else
       {
           
           p=hash_table[index];
           prev=hash_table[index];
           while(p!=NULL && p->data<key)
           {
               prev=p;
               p=p->next;
           }
          
           
           if(p==hash_table[index])
           {
               
               
               hash_table[index]=getNode(key);
              hash_table[index]->next=p;
              
           } 
           else
           {
               
               Node* temp=getNode(key);
               temp->next=p;
               prev->next=temp;
           }
       }
   } 
   
   void search(int key)
   {
       int index=hash_fun(key);
       
       Node* temp=hash_table[index];
       int flag=0;
       while(temp!=NULL)
       {
           if(temp->data==key)
           {
               flag=1;
               break;
           }
           temp=temp->next;
       }
       
       if(flag==1)
       {
           cout<<"\nKey found";
       }
       else
       {
           cout<<"\nKey not found";
       }
   }
   
   
    void insert()
    {
        int x;
        cout<<"\nEnter the 10 keys";
        for(int i=0;i<10;i++)
        {
            cin>>keys[i];
            x=hash_fun(keys[i]);
            cout<<"\nkey "<<keys[i]<<" hash "<<x;
            insert_node(x,keys[i]);
        }
    }
    void operations()
    {
        int n;
        char ch;
       
        do
        {
           
          cout<<"\nWhich operation you want to perform";
          cout<<"\n1.Insert";
          cout<<"\n2.Delete";
          cout<<"\n3.Search";
          cin>>n;
       
       switch(n)
        {
            case 1:
                  insert();
                  cout<<"\nKey inserted successfully";
                  break;
            case 2:
                   Del();
                   break;
            case 3:
                   int key;
                   cout<<"\nEnter key you want to search";
                   cin>>key;
                   search(key);
                   break;
        }
          cout<<"\nDo you want to perform any other operation";
          cin>>ch;
        }while(ch=='y');
        
         cout<<"\n";
   
   for(int i=0;i<10;i++)
   {
       
       Node* p=hash_table[i];
       if(p!=NULL)
       {
           while(p!=NULL)
           {
               cout<<p->data<<"("<<i<<")"<<" ";
               p=p->next;
           }
       }
   }
    }
  
   
};
int main()
{
    Hash h;
    h.operations();
}
