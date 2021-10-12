#include<iostream>
using namespace std;

class Hash
{
    int keys[7],hash_table[10];
    
    public:
    Hash()
    {
        for(int i=0;i<10;i++) hash_table[i]=-1;
    }
    
   
   int hash_fun(int t)
   {
       int res=t%10;
       return res;
   }
 
   
   
   
    void insert()
    {
        int index;
        cout<<"\nEnter the 7 keys";
        for(int i=0;i<7;i++)
        {
            cin>>keys[i];
            index=hash_fun(keys[i]);
            
            if(hash_table[index]==-1)
            {
                hash_table[index]=keys[i];
            }
            else
            {
                int temp=0;
                int new_index=(index+temp)%10;
                while(hash_table[new_index]!=-1)
                {
                   temp++;
                   new_index=(index+temp)%10;
                   
                }
                hash_table[new_index]=keys[i];
            }
            
        }
        for(int i=0;i<10;i++)
        {
            if(hash_table[i]!=-1) cout<<"\n"<<hash_table[i]<<" ("<<i<<")";
        }
    }
    void search(int key)
    {
        int flag=0,temp=0;
        int index=hash_fun(key);
        int new_index=index;
        while(hash_table[new_index]!=-1)
        {
            temp++;
            if(hash_table[new_index]==key)
            {
                flag=1;
                break;
            }
            new_index=(index+temp)%10;
            
        }
        if(flag==1) 
        cout<<"\nKey found";
        else 
        cout<<"\nKey not found";
    }
    void operations()
    {
        int n;
        char ch;
       
        do
        {
           
          cout<<"\nWhich operation you want to perform";
          cout<<"\n1.Insert";
          
          cout<<"\n2.Search";
          cin>>n;
       
       switch(n)
        {
            case 1:
                  insert();
                  cout<<"\nKey inserted successfully";
                  break;
           
           case 2:
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
   
    }
};
int main()
{
    Hash h;
    h.operations();
}
