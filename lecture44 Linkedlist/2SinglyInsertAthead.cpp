#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head, int d){

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head){

    Node* temp = head;
    while((temp != NULL)){
        cout<< temp ->data <<" ";
        temp = temp -> next ;
    }
    cout<<endl;
}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    print(head);
    cout<<"before"<<endl;

    InsertAtHead(head, 12);
     print(head);
    InsertAtHead(head,14);
    print(head);
    InsertAtHead(head,16);
    print(head);
    InsertAtHead(head,18);
    print(head);

    return 0;
}