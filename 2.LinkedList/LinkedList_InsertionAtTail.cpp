#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node*next;

    // constructor
    node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtTail(node*&head, int d)
{
    if(head==NULL){
        head = new node(d);
        return;
    }

    node *n = new node(d);
    while(head->next!=NULL){
        head = head->next;

        head->next = n;
        n->next = NULL;
    }


}

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ->";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    node*head = NULL;

    insertAtTail(head,5);


    print(head);


    return 0;
}