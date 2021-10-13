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
                while(max_heap[n]>max_heap[n/2] && n>1)
                {
                     
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
        int key,swap;
        char ch;
        do
        {
        
        if(size>1)
        {
        key=max_heap[1];
        cout<<"\n Root element "<<key<<" deleted successfully";
        max_heap[1]=max_heap[size-1];
        size--;
        int k=1;
        
        
          
        while(k<size && 2*k<size)
        {
            
            if(max_heap[2*k]>max_heap[(2*k+1)])
            {
               swap=max_heap[k];
               max_heap[k]=max_heap[2*k];
               max_heap[2*k]=swap;
               k=2*k;
            }
            else
            {
                swap=max_heap[k];
               max_heap[k]=max_heap[(2*k+1)];
               max_heap[(2*k+1)]=swap;
               k=(2*k+1);
            }
        }
        
        
        cout<<"\nDo you want to delete more element";
        cin>>ch;
        }
        else 
        {
            cout<<"\nNo element in heap ";
            break;
        }
        }while(ch=='y');
        
        cout<<"\n";
        
        
    }
};
int main()
{
    max_Heap m;
    m.insert();
    m.Delete();
}
