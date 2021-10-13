#include<iostream>
using namespace std;
class Heap_sort
{
    int min_heap[50],size,h_size=1,arr[50],sort_arr[50];
    public:
    void insert()
    {
        int c;
        
          for(int i=0;i<size;i++)
          {
            min_heap[h_size]=arr[i];
            if(h_size>1)
            {
                int swap,n=h_size;
                while(min_heap[n]<min_heap[n/2] && n>1)
                {
                     
                    swap=min_heap[n/2];
                    min_heap[n/2]=min_heap[n];
                    min_heap[n]=swap;
                    n=n/2;
                   
                }
               
            }
             h_size++;
          } 
       
        /*for(int i=1;i<h_size;i++)
        {
            cout<<min_heap[i]<<" ";
        }*/
    }
   void Hsort()
    {
        int swap;
        for(int i=0;i<size;i++)
        {
        if(h_size>1)
        {
         sort_arr[i]=min_heap[1];
      
          min_heap[1]=min_heap[h_size-1];
          h_size--;
          int k=1;
        while(k<h_size && 2*k<h_size)
        {
            
            if(min_heap[2*k]<min_heap[(2*k+1)])
            {
               swap=min_heap[k];
               min_heap[k]=min_heap[2*k];
               min_heap[2*k]=swap;
               k=2*k;
            }
            else
            {
                swap=min_heap[k];
               min_heap[k]=min_heap[(2*k+1)];
               min_heap[(2*k+1)]=swap;
               k=(2*k+1);
            }
        }
        
        }
        }
        cout<<"\nSorted array is ";
        for(int i=0;i<size;i++)
        {
            cout<<sort_arr[i]<<" ";
        }
    }
    void getElements()
    {
        cout<<"\nEnter size";
        cin>>size;
        
        cout<<"\nEnter "<<size<<" elements in array";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        
        insert();
        Hsort();
    }
};
int main()
{
    Heap_sort h;
    h.getElements();
}
    
