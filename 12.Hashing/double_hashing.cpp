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
 
   
   int hash_fun2(int t)
   {
       return 7-(t%7);//r < size and nearest prime number to size
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
                int temp=1,t=hash_fun2(keys[i]);
                
                int new_index=(index+temp*t)%10;
                while(hash_table[new_index]!=-1)
                {
                   temp++;
                   new_index=(index+temp*t)%10;
                   
                }
                hash_table[new_index]=keys[i];
            }
            
        }
        for(int i=0;i<10;i++)
        {
            if(hash_table[i]!=-1) cout<<"\n"<<hash_table[i]<<" ("<<i<<")";
        }
    }
   
    void operations()
    {
       
                  insert();
                  cout<<"\nKeys inserted successfully";
    }
};
int main()
{
    Hash h;
    h.operations();
}
