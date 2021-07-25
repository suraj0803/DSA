#include<iostream>
#include<list>

using namespace std;

class Graph{
    int V;
    list<int> *l;
    public:
    Graph(int v){
        V=v;
        //Array of linkedlist
        l = new list<int> [v];
    }

    void add_edge(int u, int v, bool bidir = true){
        l[u].push_back(v);
        if(bidir){
            l[v].push_back(u);
        }
    }

    void print(){
        for(int i=0; i<V; i++){
            cout<<i<<"-->";
            // l[i] is a linked list

            for(int vertex : l[i]){
                cout<<vertex<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph g(5);

    g.add_edge(0,1);
    g.add_edge(0,4);
    g.add_edge(4,3);
    g.add_edge(1,4);
    g.add_edge(1,2);
    g.add_edge(2,3);
    g.add_edge(1,3);

    g.print();

    return 0;
}