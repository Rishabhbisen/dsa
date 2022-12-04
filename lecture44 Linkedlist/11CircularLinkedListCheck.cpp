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

//singly linked list
void InsertAtHead(Node* &head,int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
    }

    else{
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
    }
}

//for circular linked list
void insertAtnode(Node* &tail, int elemant ,int d){

    //first position
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp -> next = temp;  //self representation
    }
    else{
        //for insterting last node and middle node
        Node* curr = tail;

        while(curr -> data != elemant){
            curr = curr -> next;
        }

        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

bool iscircular(Node* head){

    //if linked list is empty so we have to return true
    if(head == NULL){
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == head){
        return true;
    }

    return false;

}

void print(Node* &head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp ->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){

    Node* head = NULL;
    
    //this is the code of singly linked list
    //it will show false output
    // InsertAtHead(head,1);
    // InsertAtHead(head,2);
    // InsertAtHead(head,3);
    // InsertAtHead(head,4);
    // InsertAtHead(head,5);


    //this is the code of circular linked list
    //it will print true as a output
    insertAtnode(head,2,4);
    insertAtnode(head,4,6);
    insertAtnode(head,6,7);
    insertAtnode(head,7,25);
   

   if(iscircular(head)){
    cout<<"linked list is circular"<<endl;
   }

   else{
    cout<<"linked list is not circular"<<endl;
   }



    return 0;
}