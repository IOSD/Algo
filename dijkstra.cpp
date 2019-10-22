
#include<bits/stdc++.h>
using namespace std;


template<typename T>
class graphmap{

    map<T, list<T> >l;
    map<T, list<pair<T,int>>> m;
public:
    graphmap(){

    }

void addedge(T u, T v, bool bidir=true){
l[u].push_back(v);
if(bidir){
    l[v].push_back(u);
}
}

void addedge(T u, T v, bool bidir,int dist){
 m[u].push_back(make_pair(v,dist));
if(bidir){
    m[v].push_back(make_pair(u,dist));
}
}



void printgraph(){

for(auto i: l){
    cout<<i.first<<"-";
    for(auto vertex: i.second){
cout<<vertex<<",";
    }
cout<<endl;
}

}





void dijkstra(T src){
    //map<T, list<pair<T,int>>> m;
    map<T,int> distance;
    set<pair<int, T> >s;

    for(auto i:m){
            distance[i.first]=INT_MAX;

    }


    distance[src]=0;
    s.insert(make_pair(0,src));


    while(!s.empty()){
            //cout<<"yha";
        auto p= *(s.begin());
        T node= p.second;
        s.erase(s.begin());
   // cout<<"yha2 --"<<node;;
        for(auto i:m[node]){
           // cout<<"yha2";
            if(p.first+ i.second< distance[i.first]){

 //cout<<distance[i.first]<<"initial"<<endl;
                auto f =s.find(make_pair(distance[i.first], i.first));
                  // try without using this IF statement
                if(f!=s.end()){
                    s.erase(f);
                }
                distance[i.first]=p.first+ i.second;
                cout<<distance[i.first]<<endl;
                s.insert(make_pair(distance[i.first], i.first));
            }

        }



    }

   for( auto i: distance){
       if(i.second==INT_MAX){
            cout<<"-1 ";
        }
       else if(i.first!=src){
           cout<<i.second<<" ";
           }

   }
}




int main(){

graphmap<int> g;

g.addedge(1,2,true);
g.addedge(2,3,true);
g.addedge(3,4,true);
g.addedge(1,4,true);
g.addedge(5,3,true);
g.addedge(3,1,true);
g.printgraph();
cout<<"dijkstra:: ";
g.dijkstra(1);
return 0;
}

