# Undirected Graph using Adjacency Matrix (BFS and DFS)

## Explanation of Data Structures

1. Adjacency Matrix  
   A two-dimensional array `adj[SIZE][SIZE]` is used to represent the graph.  
   If there is an edge between vertex i and vertex j, then `adj[i][j] = 1`, otherwise `0`.  
   Since the graph is undirected, both `adj[u][v]` and `adj[v][u]` are set to 1.

2. Visited Array  
   A one-dimensional array `visited[SIZE]` is used to keep track of visited vertices during traversal.  
   If a vertex is visited, its value is set to 1.

3. Queue (for BFS)  
   A simple array `queue[SIZE]` is used to implement the queue for Breadth First Search.

4. Variable n  
   The variable `n` stores the number of vertices in the graph.


## Functions

1. DFS(int v)  
   This function performs Depth First Search starting from vertex v.  
   It marks the current vertex as visited and recursively visits all unvisited adjacent vertices.

2. BFS(int start)  
   This function performs Breadth First Search starting from the given vertex.  
   It uses a queue to visit vertices level by level.  
   Each adjacent unvisited vertex is marked visited and added to the queue.

3. main()  
   This function initializes the graph, takes user input for vertices and edges, and calls DFS and BFS functions.


## main() function.

1.  Read the number of vertices.  
2. Initialize the adjacency matrix with 0.  
3. Read the number of edges.  
4.  Input each edge and update the adjacency matrix.  
5. Initialize the visited array.  
6. Call DFS starting from vertex 0.  
7. Call BFS starting from vertex 0.  
8.  End the program.


## Sample Output

Enter number of vertices: 5  
Enter number of edges: 5  

0 1  
0 2  
1 3  
1 4  
3 4  

DFS Traversal: 0 1 3 4 2  
BFS Traversal: 0 1 2 3 4