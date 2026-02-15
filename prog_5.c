#include <stdio.h>
#define SIZE 10

int adj[SIZE][SIZE];
int visited[SIZE];
int n;

void DFS(int v)
{
    int i;
    visited[v] = 1;
    printf("%d ", v);
    for(i = 0; i < n; i++)
    {
        if(adj[v][i] == 1 && visited[i] == 0)
            DFS(i);
    }
}

void BFS(int start)
{
    int queue[SIZE], front = 0, rear = 0;
    int i;
    for(i = 0; i < n; i++)
        visited[i] = 0;

    visited[start] = 1;
    queue[rear++] = start;

    while(front < rear)
    {
        int v = queue[front++];
        printf("%d ", v);

        for(i = 0; i < n; i++)
        {
            if(adj[v][i] == 1 && visited[i] == 0)
            {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}

int main()
{
    int i, j, edges, u, v;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            adj[i][j] = 0;

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    for(i = 0; i < edges; i++)
    {
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    for(i = 0; i < n; i++)
        visited[i] = 0;

    printf("DFS Traversal: ");

    DFS(0);

    printf("\nBFS Traversal: ");
    
    BFS(0);

    return 0;
}