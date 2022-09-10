#include<bits/stdc++.h>
using namespace std;
//doubly linkedlist implimantation
class Node{

public:
int data;
Node* prev;
Node* next;

Node(int data){
    this -> data = data;
    this -> next = NULL;
    this -> prev = NULL;
}

};

void InsertAthead(Node* &tail, Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    temp -> next = head;
    head ->prev = temp;
    head = temp;
    }
}

void InsertAttail( Node* &tail, Node* &head, int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    Node* temp = new Node(d);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp;
}

void inseartAtPosition(Node* &tail,Node* &head, int position, int d){

    //at start position
    if(position == 1){
        InsertAthead(head,tail,d);
        return ;
    }

    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    //last position
    if(temp -> next == NULL){
        InsertAttail(head,tail,d);
        return ;
    }

    //creating a node for d (middle)
    Node* Nodetoindex = new Node(d);
    Nodetoindex -> next = temp -> next;
    Nodetoindex -> prev = temp;
    temp -> next = Nodetoindex;
    temp -> next -> prev = Nodetoindex;


}

int getlength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}


int main(){

    // Node* node1 = new Node(10);

    // Node* head = node1;
    // Node* tail = node1;

    Node* head = NULL;
    Node* tail = NULL;

    InsertAthead(tail,head,12);
    InsertAthead(tail,head,13);
    InsertAthead(tail,head,14);
    InsertAthead(tail,head,15);
    print(head);
    int ans = getlength(head);
    cout<<"length "<<ans<<endl;

    cout<<"inseartAttail "<<endl;
    InsertAttail(tail,head,120);
    print(head);  //esko hmne head ke tail me dal diya hai
    InsertAttail(tail,head,121);
    print(head);
    InsertAttail(tail,head,122);
    print(head);

    inseartAtPosition(tail,head,2,200);
    print(head);

    return 0;
}