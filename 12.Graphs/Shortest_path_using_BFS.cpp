#include<iostream>
#include<list>
#include<map>
#include<queue>

using namespace std;

template<typename T>
class Graph{
    map<T,list<T>> adjlist;

    public:
    Graph(){
       // int V;
        //l = new list<int>[V];
    }

    void add_edge(T u, T v, bool bidir=true){
        adjlist[u].push_back(v);
        if(bidir){
            adjlist[v].push_back(u);
        }
    }

    void print(){
        // Iterate over the map
        for(auto i : adjlist){
            cout<<i.first<<"-->";
        //i.second in LL
        for(T entry : i.second){
            cout<<entry<<",";
        }
        cout<<endl;
        }
    }

    void bfs(T src){
        queue<T> q;
        map<T,int> dist;
        map<T,T> parent;

        for(auto i:adjlist){
            dist[i.first] = INT_MAX;
        }
        q.push(src);
        dist[src] = 0;
        parent[src] = src;

        while(!q.empty()){
            T node = q.front();
            cout<<node<<"-->";
            q.pop();
            // For the nighbors of node find out the node which are not visited.
            for(auto neighbor : adjlist[node]){
                if(dist[neighbor]==INT_MAX){
                    q.push(neighbor);
                    dist[neighbor] = dist[node] + 1;
                    parent[neighbor] = node;
                }
            }
        }
        // Print the distance to all nodes
        for(auto i: adjlist){
            T node = i.first;
            cout<<"Dist of "<<node<<" from "<<src<<" is "<<dist[node]<<endl;
        }

    }
};

int main(){
    Graph<int> g;
    g.add_edge(0,1);
    g.add_edge(1,2);
    g.add_edge(0,4);
    g.add_edge(2,4);
    g.add_edge(2,3);
    g.add_edge(3,5);
    g.add_edge(3,4);

    g.bfs(0);

    return 0;
}