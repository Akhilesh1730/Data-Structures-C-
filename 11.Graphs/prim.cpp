#include<iostream>
using namespace std;
class Graph
{
  int mat[20][20],near[20],no_of_vert,T[2][20],k,max=99999,min_val=max,x,y,res[20];
  
  public:
  Graph()
  {
      for(int i=0;i<20;i++) near[i]=max;
  }
  
  void init()
  {
       for(int i=0;i<no_of_vert;i++)
      for(int j=0;j<no_of_vert;j++) 
       if(mat[i][j]==0) mat[i][j]=max;
  }
  
  void prim()
  {
      cout<<"\nEnter the number of vertices";
      cin>>no_of_vert;
      
      cout<<"\nEnter graph matrix";
      for(int i=0;i<no_of_vert;i++)
      for(int j=0;j<no_of_vert;j++) 
      cin>>mat[i][j];
      
     init();
      
      
      for(int i=0;i<no_of_vert;i++)
      for(int j=0;j<no_of_vert;j++) 
      {
          if(mat[i][j]<min_val) 
          {
              min_val=mat[i][j];
              T[0][0]=i;
              T[1][0]=j;
          }
      }
    
   
    near[T[0][0]]=-1;
    near[T[1][0]]=-1;
    
    for(int i=0;i<no_of_vert;i++)
     {
         if(near[i]!=-1)
         {
             min_val=mat[i][T[0][0]];
             near[i]=T[0][0];
             
             if(min_val>mat[i][T[1][0]]) 
             {
                 min_val=mat[i][T[1][0]];
                 near[i]=T[1][0];    
             }
             
             if(min_val==max)
             {
                 near[i]=T[1][0];
             }
             
             
         }
     }
     
      for(int i=1;i<no_of_vert-1;i++)
      {
          
          min_val=max;
     
         for(int j=0;j<no_of_vert;j++)
         {
            if(near[j]!=-1)
             {
               if(min_val>mat[j][near[j]])
                {
                   min_val=mat[j][near[j]];
                   x=j;
                   y=near[j];
                }
               
               }
          }
          
          T[0][i]=x;
          T[1][i]=y;
          
          near[x]=near[y]=-1;
          
          
    for(int k=0;k<no_of_vert;k++)
     {
         if(near[k]!=-1)
         {
             min_val=mat[k][T[0][i]];
             near[k]=T[0][i];
             
             if(min_val>mat[k][T[0][i]]) 
             {
                 min_val=mat[k][T[1][i]];
                 near[k]=T[1][i];    
             }
             
             if(min_val==max)
             {
                 near[k]=T[1][i];
             }
             
             
         } 
    }
      
     
    }
        int l=0,vis[20];
        for(int i=0;i<20;i++) vis[i]=0;
        for(int i=0;i<no_of_vert-1;i++)
        {
               int c=0;
               while(c<2)
               {
                   if(vis[T[c][i]]!=1)
                   {
                       res[l++]=T[c][i];
                       vis[T[c][i]]=1;
                   }
                   c++;
               }
               
        }
        
        cout<<"\nMinimum spanning tree is ";
        for(int i=0;i<l;i++) cout<<res[i]<<"->";
   }
};
int main()
{
    Graph g;
    g.prim();
}
