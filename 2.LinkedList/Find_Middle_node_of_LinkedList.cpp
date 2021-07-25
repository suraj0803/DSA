#include<iostream>
#include<list>

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
        head = new node(d);// dynamic allocation
        return;
    }
    node *new_node = new node(d);
    new_node->next=head;
    head = new_node;
}

int findMiddleNode(node *head){
    node *fastptr, *slowptr;
    for(fastptr=head, slowptr=head; fastptr&&slowptr&&fastptr->next; fastptr = fastptr->next->next, slowptr = slowptr->next);
    return slowptr->data;
}

void print(node *head)
{
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    node *head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);

    print(head);

    cout<<findMiddleNode(head)<<endl;
    return 0;

}