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

    ~Node(){
        int value = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node "<<value<<endl;
    }

};

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

void deleteatnode(Node*&tail, int value){

    //empty list
    if(tail == NULL){
        cout<<"list is empty "<<endl;
    } 
    else{
        //non empty list

        //assuming that value is presant in the linked list
        Node* prev = tail;
        Node* curr = prev -> next;

        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        //1 node linked list
        if(curr == prev){
            tail = NULL;
        }

        //for 2 node
        else if(tail == curr){
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* &tail){

    Node* temp = tail;

    //in this loop, loop will execute one time at most than he will check condition
    do{
        cout<<tail -> data<<" ";
        tail = tail -> next;
    }while(tail != temp);
    cout<<endl;

    // it will not execute first condition that,s why other condition not running
    //suppose first elemant is 1 , tail = 1, and temp = 1 condition satisfy loop will not execute
    // while(tail != temp){
    //     cout<<tail -> data<<" ";
    //     tail = tail -> next;
    // }
}

int main(){

    Node* tail = NULL;

    insertAtnode(tail,5,3);
    print(tail);

    insertAtnode(tail,3,5);
    print(tail);

    insertAtnode(tail,5,9);
    print(tail);

    insertAtnode(tail,9,10);
    print(tail);

    deleteatnode(tail,9);
    print(tail);


    return 0;
}