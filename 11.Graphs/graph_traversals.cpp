#include<iostream>
using namespace std;

class Queue
{
    int front,rear;
    int data[999];
    public:
    Queue()
    {
        rear=front=-1;
        
    }
    int isempty()
    {
        if(rear==front) return 1;
        else return 0;
    }
    void enque(int num)
    {
        rear++;
        data[rear]=num;
    }
    int deque()
    {
        front++;
        return data[front];
    }
};
class Graph
{
    int n;
  int mat[20][20];
  int visited[20];
  Queue q;
  public:
  Graph()
  {
      for(int i=0;i<20;i++) visited[i]=0;
  }
  void init()
  {
      for(int i=0;i<20;i++) visited[i]=0;
  }
  void get_graph()
  {
      cout<<"\nEnter the number of vertices in a graph";
      cin>>n;
      
      cout<<"\nEnter graph matrix";
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<n;j++)
             cin>>mat[i][j];
      }
      
      
  }
   
  void BFS(int i)
  {
      int t;
      cout<<"\nBFS for graph is ";
      cout<<" "<<i+1;
      visited[i]=1;
      q.enque(i);
      
      while(!q.isempty())
      {
          t=q.deque();
          for(int v=0;v<n;v++)
          {
              if(mat[t][v]==1 && visited[v]==0)
              {
                  cout<<" "<<v+1;
                  visited[v]=1;
                  q.enque(v);
              }
          }
      }
      
     
  }
  
  void DFS(int i)
  {
      if(visited[i]==0)
      {
          cout<<" "<<i;
          visited[i]=1;
          for(int v=0;v<n;v++)
          {
              if(mat[i][v]==1 && visited[v]==0)
              {
                  DFS(v);
              }
          }
      }
  }
  
  void graph_operations()
  {
      int c;
      char ch;
      
      do
      {
      cout<<"\nEnter the operation you want to perform";
      cout<<"\n1.Enter graph ";
      cout<<"\n2.BFS";
      cout<<"\n3.DFS";
      cin>>c;
      
      switch(c)
      {
          case 1: 
                get_graph();
                break;
          case 2:
                init();
                BFS(0);
                break;
          case 3:
                init();
                cout<<"\nDFS is ";
                DFS(0);
                break;
                
      }
      
      cout<<"\nDo you want to perform any other operation";
      cin>>ch;
      }while(ch=='y');
  }
};
int main()
{
    Graph g;
    g.graph_operations();
}
