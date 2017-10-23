// Program to print BFS traversal from a given source vertex. BFS(int s) 
// traverses vertices reachable from s.
#include<iostream>
#include <list>
 
using namespace std;
 
// This class represents a directed graph using adjacency list representation
class Graph
{
    int V;    // No. of vertices
    list<int> *adj;    // Pointer to an array containing adjacency lists
public:
    Graph(int V);  // Constructor
    void addEdge(int v, int w); // function to add an edge to graph
    void BFS(int s);  // prints BFS traversal from a given source s
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
 
void Graph::BFS(int s)
{
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
 
    // Create a queue for BFS
    list<int> queue;
 
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);
 
    // 'i' will be used to get all adjacent vertices of a vertex
    list<int>::iterator i;
 
    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        cout << s << " ";
        queue.pop_front();
 
        // Get all adjacent vertices of the dequeued vertex s
        // If a adjacent has not been visited, then mark it visited
        // and enqueue it
        for(i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}
 
// Driver program to test methods of graph class
int main()
{
    int choice,initial_vertex,dest_vertex,no_of_vertex,bfs_start;
	cout << "Enter the number of vertices";
	cin >> no_of_vertex;
    Graph g(no_of_vertex);
    while(1){
	cout << "1. Enter a new edge\n";
	cout << "2. BFS\n";
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
	cout << "Enter the node from which BFS should start";
	cin >> bfs_start;
	g.BFS(bfs_start);
	break;
	}
	if(choice==3){
	break;
	}
	}

    return 0;
}