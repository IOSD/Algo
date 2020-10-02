#include <iostream>
#include <list>

/*
	time complexity : O(V+E) 
	space complexity : O(V)

	V = Vertecies
	E = Edges
*/

using namespace std;
// create Graph class
class Graph
{
	int v;
	list<int> *adj;

public:
	// constructor
	Graph(int v);
	// add edge function
	void addEdge(int v, int w);
	// bfs function
	void bfs(int s);
};
Graph::Graph(int v)
{
	this->v = v;
	adj = new list<int>[v];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w);
}

void Graph::bfs(int s)
{
	bool *visited = new bool[v];
	for (int i = 0; i < v; i++)
	{
		visited[i] = false;
	}

	list<int> queue;
	visited[s] = true;
	queue.push_back(s);
	// create a list iterator
	list<int>::iterator i;
	while (!queue.empty())
	{
		s = queue.front();
		cout << s << " ";
		queue.pop_front();
		for (i = adj[s].begin(); i != adj[s].end(); i++)
		{
			if (!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
}

int main()
{
	// Create a graph
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);
	// perform bfs
	g.bfs(0);

	return 0;
}