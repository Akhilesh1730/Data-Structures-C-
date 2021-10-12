#include<iostream>
using namespace std;
class max_Heap
{
    int max_heap[50],size=1;
    public:
    void insert()
    {
        int c;
        char ch;
        do
        {
            cout<<"\nEnter the element";
            cin>>max_heap[size];
            if(size>1)
            {
                int swap,n=size;
                while(max_heap[n]>max_heap[n/2] && n>0)
                {
                     cout<<"\n"<<n<<" "<<n/2;
                    swap=max_heap[n/2];
                    max_heap[n/2]=max_heap[n];
                    max_heap[n]=swap;
                    n=n/2;
                   
                }
               
            }
             size++;
           
            cout<<"\nDo you want to enter more elements";
            cin>>ch;
        }while(ch=='y');
       
        for(int i=1;i<size;i++)
        {
            cout<<max_heap[i]<<" ";
        }
    }
    void Delete()
    {
        int key;
        char ch;
        do
        {
        cout<<"\nEnter key to delete";
        cin>>key;
        
        int k=1;
        while(max_heap[k]!=key)
          k++;
        
        while(k<size)
        {
            if(max_heap[2*k]>max_heap[(2*k+1)])
            {
               max_heap[k]=max_heap[2*k];
               k=2*k;
            }
            else
            {
                max_heap[k]=max_heap[(2*k+1)];
               k=(2*k+1);
            }
        }
        size--;
        cout<<"\nDo you want to delete more element";
        cin>>ch;
        }while(ch=='y');
        
         for(int i=1;i<size;i++)
        {
            cout<<max_heap[i]<<" ";
        }
        
    }
};
int main()
{
    max_Heap m;
    m.insert();
    m.Delete();
}
