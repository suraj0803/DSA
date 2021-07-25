#include<iostream>

using namespace std;

// Fast pointer --> move two steps and slow pointer ---> moves single step.
// As the fast pointer reaches the end the slow pointer will reach till mid way.

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

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<endl;
}

node *midpoint(node *head)
{
    if(head == NULL or head->next == NULL){
        return head;
    }
    node *slow = head;
    node *fast = head->next;

    while(fast !=NULL and fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}



int main()
{
    node*head = NULL;
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);

    print(head);

    node *mid = midpoint(head);
    cout<<mid->data<<endl;

    return 0;
}