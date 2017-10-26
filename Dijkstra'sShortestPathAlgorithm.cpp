#include <bits/stdc++.h>
using namespace std;

template<typename T>


// Code for Templated Graph
class Graph{
    unordered_map<T,list<pair<T,int>>> m;
    
public:
    
    void addEdge(T node1, T node2, int weight=1, bool bidir=true){
        m[node1].push_back( make_pair(node2,weight));
        if(bidir)
            m[node2].push_back( make_pair(node1,weight));
    }
    
    void printAdjList(){
        for(auto i: m){
            cout<<i.first<<"--> ";   
            for(auto j:i.second)
                cout<<"("<<j.first<<","<<j.second<<") "; 
            cout<<endl;
        }
    }
    
    
    // Algorithm for finding shortest distance from a single source 
    void dijkstra(T src){                               // Taking source node as argument
        
        unordered_map<T,int> distanceFromSrcNode;
        for(auto i:m)                                   // Setting initial distanceFromSrcNode values for all nodes to be infinite
            distanceFromSrcNode[i.first] = INT_MAX;
        distanceFromSrcNode[src] = 0;                   // Setting initial distanceFromSrcNode values for src node to be zero
        
        set<pair<int,T>> s;
        s.insert( make_pair(0,src) );
        
        while(!s.empty()){
            auto firtsPairInSet = *(s.begin()) ;
            T node = firtsPairInSet.second;
            int distanceOfParentFromSrc = firtsPairInSet.first;
            s.erase(s.begin());                         // In each iteration distanceFromSrcNode of a node is calculated and that node is erased from set
            
            for(auto neighbourPair: m[node]){
                T neighbour = neighbourPair.first;
                if( distanceOfParentFromSrc + neighbourPair.second < distanceFromSrcNode[neighbour]){
        
                    auto foundAt = s.find( make_pair(distanceFromSrcNode[neighbour],neighbour) );   // takes O(1) time
                    
                    //Removing the old pair if found
                    if(foundAt != s.end())
                        s.erase(foundAt);                                                           // takes O(logN) time
                        
                    //Adding new pair with updated distance from src node
                    distanceFromSrcNode[neighbour] = distanceOfParentFromSrc + neighbourPair.second ;
                    s.insert(make_pair(distanceFromSrcNode[neighbour],neighbour));                  
                }
            }
        }
        
        for(auto i:distanceFromSrcNode)
            cout<<"Distance of "<<i.first<<" from "<<src<<" is "<<i.second<<endl;
    }
};
int main() {
    Graph<int> g;
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.printAdjList();
    g.dijkstra(1);
    return 0;
}
