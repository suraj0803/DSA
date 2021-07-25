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

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<endl;
}

int length(node*head){
    int count = 0;
    while(head!=NULL){
        count++;
        head = head->next;
    }
    return count;

}
void insertAtTail(node*&head, int d)
{
    if(head==NULL){
        head = new node(d);
        return;
    }
    node *tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new node(d);
    return;
}

void insertInMiddle(node*&head, int d, int p)
{
    //corner case
    if(head==NULL or p==0){
        insertAtHead(head,d);
        return;
    }
    else if(p>length(head)){
        insertAtTail(head,d);
    }
    else{
        // Take p-1 jumps
        int jump = 1;
        node*temp = head;
        while(jump<=p-1){
            temp = temp->next;
            jump++;
        }
        // create a new node
        node*n = new node(d);
        n->next = temp->next;
        temp->next = n;
    }
}

void deleteAtHead(node*&head){
    if(head == NULL){
        return;
    }
    node *temp = head->next;
    delete head;
    head = temp;
}

// Search operation---------> Linear Search

bool search(node*&head, int key)
{
    node *temp = head;
    while(temp!=NULL){
        if(head->data == key){
            return true;
        }
        head = head->next;
    }
    return false;
}

node* take_input(){
    int d;
    cin>>d;

    node*head = NULL;
    while(d!=-1){
        insertAtHead(head,d);
        cin>>d;
    }
    return head;
}



int main()
{
    node*head = take_input();
    print(head);

    return 0;
}