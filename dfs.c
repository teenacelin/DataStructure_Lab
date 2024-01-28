#include <stdio.h>
#include <stdlib.h>
 # define MAX 100
 
int visited[MAX];
int adjacencyMatrix[MAX][MAX];
void dfs(int vertex,int vertices)
{
  visited[vertex]=-1;
  printf("%d",vertex);
  for(int i=0;i<vertices;i++)
  {
     if(adjacencyMatrix[vertex][i]==1 && !visited[i])
     {
        dfs(i,vertices);
     }
  }
}
int main()
{
  int vertices;
  printf("enter the no of vertices");
  scanf("%d",&vertices);
  printf("enter the adjacency matrix");
  for(int i=0;i<vertices;i++)
  {
     for(int j=0;j<vertices;j++)
     {
         scanf("%d",&adjacencyMatrix[i][j]);
     }
  }
  for(int i=0;i<vertices;i++){
   visited[i]=0;
  }
  printf("dfs starting from vertex o:");
  dfs(0,vertices);
  
  return 0;
}
       
         
