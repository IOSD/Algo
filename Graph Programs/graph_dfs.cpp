// C++ program to print DFS traversal from a given vertex in a  given graph
#include<iostream>
#include<list>
 
using namespace std;
 
// Graph class represents a directed graph using adjacency list representation
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
    void DFSUtil(int v, bool visited[]);  // A function used by DFS
public:
    Graph(int V);   // Constructor
    void addEdge(int v, int w);   // function to add an edge to graph
    void DFS(int v);    // DFS traversal of the vertices reachable from v
};
 
Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}
 
void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}
 
void Graph::DFSUtil(int v, bool visited[])
{
    // Mark the current node as visited and print it
    visited[v] = true;
    cout << v << " ";
 
    // Recur for all the vertices adjacent to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(*i, visited);
}
 
// DFS traversal of the vertices reachable from v. 
// It uses recursive DFSUtil()
void Graph::DFS(int v)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    // Call the recursive helper function to print DFS traversal
    DFSUtil(v, visited);
}
 
// Driver program to test methods of graph class
int main()
{
    int choice,initial_vertex,dest_vertex,no_of_vertex,dfs_start;
	cout << "Enter the number of vertices";
	cin >> no_of_vertex;
    Graph g(no_of_vertex);
    while(1){
	cout << "1. Enter a new edge\n";
	cout << "2. DFS\n";
	cout << "3.Exit";
	cout << "Enter your choice";
	cin >> choice;
	switch(choice){
	case 1: cout << "Enter the initial vertex";
	cin >> initial_vertex;
	cout << "Enter the destination vertex";
	cin >> dest_vertex;
	addEdge(initial_vertex,dest_vertex);
	break;
	
	case 2:
	cout << "Enter the node from which DFS should start";
	cin >> dfs_start;
	g.DFS(dfs_start);
	break;
	}
	if(choice==3){
	break;
	}
	}

    return 0;
}