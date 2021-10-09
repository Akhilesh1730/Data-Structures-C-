#include<iostream>
using namespace std;
class Graph
{
    int mat[20][20],no_of_vert,include[20],set[20],cost[3][20],vis[20],res[2][20];
   public:
   
   Graph()
   {
       for(int i=0;i<20;i++)
       {
           include[i]=0;
           set[i]=-1;
           vis[i]=0;
       }
   }
   
   void Union(int u,int v)
   {
      
           if (set[u] < set[v])
           {
        set[u] += set[v];
        set[v] = u;
         } 
    else 
    {
        set[v] += set[u];
        set[u] = v;
    }
   }
    
   int find(int u)
   {
       int x=u;
       int v=0;
       while(set[x]>0)
       {
           x=set[x];
           
       }
       while(u!=x)
       {
           v=set[u];
           set[u]=x;
           u=v;
       }
       return x;
   }
   int get_min(int cost_j)
   {
       int min_val=99999,ind;
       for(int l=0;l<cost_j;l++)
       {
           if(cost[2][l]<min_val && include[l]==0)
           {
               min_val=cost[2][l];
               ind=l;
           }
       }
       return ind;
   }
   void kruskal()
   {
       
       
       cout<<"\nEnter number of vertices ";
       cin>>no_of_vert;
       
       cout<<"\nEnter graph matrix";
       for(int i=0;i<no_of_vert;i++)
       for(int j=0;j<no_of_vert;j++)
       cin>>mat[i][j];
       
       int cost_i=0,cost_j=0;
       for(int i=0;i<no_of_vert;i++)
       for(int j=i;j<no_of_vert;j++)
       {
           cost_i=0;
           if(mat[i][j]>0)
           {
               cost[cost_i++][cost_j]=i;
               cost[cost_i++][cost_j]=j;
               cost[cost_i][cost_j++]=mat[i][j];
               
           }
           
       }
       
       for(int i=0;i<3;i++)
       {
           cout<<"\n";
           for(int j=0;j<cost_j;j++)
           {
               cout<<" "<<cost[i][j];
           }
       }
       int res_i=0,res_j=0;
       for(int l=0;l<cost_j;l++)//main loop
       {
          int j=get_min(cost_j);
         /* cout<<"\n j is "<<j;
          cout<<"\nci is "<<cost[0][j]<<" and cj is "<< cost[1][j];*/
          include[j]=1;
         
          int x=cost[0][j];
          int y=cost[1][j];
          if(find(x)!=find(y))
          {
             res[0][res_j]=x;
             res[1][res_j++]=y;
             Union(find(x),find(y));
          }
         
     }
       cout<<"\nResult matrix\n";
       
       for(int i=0;i<2;i++)
       {
           cout<<"\n";
           for(int j=0;j<res_j;j++)
           {
               cout<<res[i][j]+1<<" ";
           }
       }
   }
};
int main()
{
    Graph g;
    g.kruskal();
}
