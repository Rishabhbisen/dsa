#include<bits/stdc++.h>
using namespace std;

class Node{

public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

void InsertAthead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void InsertAttail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void InsertAtPosition(Node* &tail, Node* &head, int position, int d){

    //starting position
    if(position == 1){
        InsertAthead(head,d);
        return ;
    }

    //position
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

     //last position (tail)
    if(temp -> next == NULL){
        InsertAttail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;


}

void print(Node* & head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp ->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

//no need to write we declare inside the main
// void printtail(Node* & tail){
//     Node* temp = tail;
//     while(temp != NULL){
//         cout<<temp ->data<<" ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }



int main(){

    Node* node1 = new Node(10);

    Node* head = node1;

    Node* tail = node1;

    InsertAthead(head,12);
    print(head);

    InsertAthead(head,13);
    print(head);
   
    cout<<"print tail"<<endl;
    
    InsertAttail(tail,15);
    print(tail);

    InsertAttail(tail,16);
    print(tail);

    cout<<"positon"<<endl;

    InsertAtPosition(tail, head , 6, 22);
    print(head);

    cout<<"head "<<head -> data<<endl;  //first elemant
    cout<<"tail "<<tail -> data<<endl;   //last elemant


    return 0;
}