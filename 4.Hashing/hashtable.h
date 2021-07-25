#include<iostream>
#include<cstring>

using namespace std;
// Implement a Hashmap
// Seperate chaining technique

template<typename T>
class Node{
    public:
    string key;
    T value;
    Node<T> *next;

    Node(string key, T val){
        this->key = key;
        value = val;
        next = NULL;
    }

    ~Node(){
        if(next!=NULL)
            delete next;
    }
};

template<typename T>
class Hashtable{
    Node<T>** table; // pointer to an array of poiners
    int curr_size;
    int table_size;

    int hashfun(string key){
        int idx = 0;
        int p=1;
        for(int j=0; j<key.length(); j++){
            idx = idx + (key[j]*p)%table_size;
            idx = idx % table_size;
            p = (p*27)%table_size;
        }
        return idx;
    }

    void rehash()
    {
        Node<T>** oldtable = table;
        int oldtableSize = table_size;
        table_size = 2*table_size; // approximation find the next prime no.
        table = new Node<T>*[table_size];

        for(int i=0; i<table_size; i++){
            table[i] = NULL;
        }
        curr_size = 0;

        // shift the element from old table to new table
        for(int i=0; i<oldtableSize; i++){
            Node<T>* temp = oldtable[i];
            while(temp!=NULL)
                insert(temp->key,temp->value);
                temp = temp->next;
        if(oldtable[i]!=NULL){
            delete oldtable[i];
        }
        }

        delete [] oldtable;
    }

    public:
    Hashtable(int ts=7){
        table_size = 7;
        table = new Node<T>*[table_size];
        curr_size = 0;

        for(int i=0; i<table_size; i++){
            table[i] = NULL;
        }
    }

    void insert(string key, T value){
        int idx = hashfun(key);

        Node<T> *n = new Node<T>(key,value);
        // Insert at the head of the linked list id = idx
        n->next = table[idx];
        table[idx] = n;
        curr_size++;

        // rehash -> for doubling the size of table.
        float load_factor = curr_size/(1.0*table_size);
        if(load_factor>0.7)
            rehash();
    }

    void print()
    {
        for(int i=0; i<table_size; i++){
            cout<<"Bucket "<<i<<" ->";
            Node<T>*temp = table[i];
            while(temp!=NULL){
                cout<<temp->key<<"->";
                temp = temp->next;
            }
            cout<<endl;

        }
    }

    T search(string key){
        int idx = hashfun(key);
        Node<T>*temp = table[idx];
        while(temp!=NULL){
            if(temp->key==key)
                return &temp->value;
            temp = temp->next;
        }
        return NULL;
    }

};