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

    //destructor for memory free karne ke liye
    ~Node(){
        int value = this -> data;
        while(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for "<<value<<endl;
    }

};

void deletAtposition(int position,Node* &head){

    //deleting first node
    if(position == 1){
        Node* temp = head;
       head =head -> next; //yaha temp bhi likhene se kuch nhi hota
        temp ->next = NULL; //jo memory point kar rahi hai uske next ko NULL kiya
        delete temp;
    }
    else
    {
        Node* previousNode = NULL;
        Node* curruntNode = head;
        
        //we assum we are in first node
        int cnt = 1;
        while(cnt < position){
            previousNode = curruntNode;
            curruntNode = curruntNode -> next;
            cnt++;
        }

        previousNode -> next = curruntNode -> next;
        curruntNode -> next = NULL;
        delete curruntNode;
    }

}

void InsertAthead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
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

    Node* node1 = new Node(10);

    Node* head = node1;
    InsertAthead(head,12);
    InsertAthead(head,13);
    InsertAthead(head,14);
    InsertAthead(head,15);
    InsertAthead(head,16);
    // print(head);

    deletAtposition(6,head);
    print(head);
    cout<<"head "<<head->data<<endl;

    return 0;
}