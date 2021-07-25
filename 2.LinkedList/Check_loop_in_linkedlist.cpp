#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtHead(node *&head, int d){
    if(head==NULL){
        head = new node(d);//dynamic array
        return;
    }
    node *new_node = new node(d);
    new_node->next = head;
    head = new_node;
}

int detectloop(node *head){
    node *fastptr, *slowptr;
    fastptr = slowptr = head;
    for(;fastptr&&slowptr&&fastptr->next;){
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;

        if(fastptr==slowptr)
           return 1;
    }
    return 0;
}

int main()
{
    node *head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,4);

    cout<<detectloop(head);

    return 0;
}