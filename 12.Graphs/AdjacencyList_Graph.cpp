#include<iostream>
#include<list>

using namespace std;


class Graph{
    int V;
    // Array of list
    list<int> *l;
    public:
    Graph(int V){
        this->V = V;
        l = new list<int>[V];
    }

    void add_edge(int x, int y){
        l[x].push_back(y);// x--->y 
        l[y].push_back(x);// y--->x
    }

    void printAdjList(){
        for(int i=0; i<V; i++){
            cout<<"Vertex"<<i<<"->";
            for(int nbr:l[i]){
                cout<<nbr<<" , ";
            }
            cout<<endl;
        }
    }

};

int main(){
    Graph g(4);

    g.add_edge(0,1);
    g.add_edge(0,2);
    g.add_edge(2,3);
    g.add_edge(1,2);

    g.printAdjList();

    return 0;

}