#include<stdio.h>
#include<stdlib.h>

# define MAX 100

int visited[MAX];
int adjacencymatrix[MAX][MAX];

void bfs(int start,int vertices)
{   int queue[MAX];
    int front=0,rear=0;
    queue[rear++]=start;
    visited[start]=1;
    printf("bfs starting from vertex %d :",  start);
    while(front<rear)
    {
        int currentvertex=queue[front++];
        printf("%d",currentvertex);
        for (int i=0;i<vertices;i++)
        {
           if(adjacencymatrix[currentvertex][i]==1 && !visited[i])
           {
               queue[rear++]=i;
               visited[i]=1;
           }
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
         scanf("%d",&adjacencymatrix[i][j]);
       }
    }
    for(int i=0;i<vertices;i++)
    {
        visited[i]=0;
    }
    
    bfs(0,vertices);
return 0;

}
         
