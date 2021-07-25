#include<iostream>
#include<map>
#include<list>
#include<queue>

using namespace std;

class Graph{
    map<int,list<int>> l;
    public:

    void add_edge(int x, int y, bool directed = true){
        l[x].push_back(y);
        if(!directed){
        l[y].push_back(x);
        }
    }

    bool cycle_helper(int node, bool *visited,int parent){
        visited[node] = true;
        for(auto nbr:l[node]){
            if(!visited[nbr]){
                // go and recursively visit the nbr
                bool cycle_mila = cycle_helper(nbr,visited,node);
                if(cycle_mila){
                    return true;
                }
            }
            else if(nbr!=parent){
                return true;
            }

        }
        return false;

    }

    bool contains_cycle(){
        // Check for cycle in directed graph
        bool *visited = new bool[V];
        for (int i=0;i<V;i++){
            visited[i] = false;
        }
        return cycle_helper(0,visited,-1);
    }
};



int main(){
    Graph g(5);
    g.add_edge(0,1);
    g.add_edge(1,2);
    g.add_edge(2,3);
    g.add_edge(3,4);
    g.add_edge(4,0);

    if(g.contains_cycle()){
        cout<<"Yes undirected graph conatains cycle.";
    }
    else{
        cout<<"No undirected graph doesnot contains cycle.";
    }


    return 0;

}