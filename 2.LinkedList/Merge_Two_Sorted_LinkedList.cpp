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
// Passing a pointer by reference in this case.
void insertAtHead(node*&head, int d)
{
    if(head == NULL){
        head = new node(d); // dynamic allocation
        return;
    }

    node *n = new node(d);
    n->next = head;
    head = n;
}

node *take_input()
{
    int d;

    node *head = NULL;
    while(cin>>d){
        insertAtHead(head,d);
        cin>>d;
    }
    return head;
}

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<endl;
}

node *merge(node *a, node *b)
{
    if(a==NULL){
        return b;
    }

    if(b==NULL){
        return a;
    }

    node *c;
    if(a->data < b->data){
        c = a;
        c->next = merge(a->next,b);
    }
    else{
        c = b;
        c->next = merge(a,b->next);
    }
    return c;
}



int main()
{
    node *head;
    node *head2;

    cin>>head>>head2;

    cout<<head<<head2;

    node *newHead = merge(head,head2);
    cout<<newHead<<endl;

    return 0;
}