//fully code of doubly linkedlist
#include<bits/stdc++.h>
using namespace std;
//doubly linkedlist implimantation
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
        while(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for "<<value<<endl;
    }

};

void deletAtposition(int position, Node* &head,Node* &tail){

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

void InsertAthead( Node* &head, int d){
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

void InsertAttail( Node* &tail,int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
    }
    else{
      Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
    }
}

void inseartAtPosition(Node* &head,Node* &tail, int position, int d){

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

    InsertAthead(head,12);
    InsertAthead(head,13);
    InsertAthead(head,14);
    InsertAthead(head,15);
    print(head);
    int ans = getlength(head);
    cout<<"length "<<ans<<endl;

    cout<<"inseartAttail "<<endl;
    InsertAttail(tail,120);
    print(tail);  //esko hmne head ke tail me dal diya hai
    InsertAttail(tail,121);
    print(tail);
    InsertAttail(tail,122);
    print(tail);

    inseartAtPosition(head,tail,2,200);
    print(head);

    cout<<"head "<<head ->data<<endl;
    cout<<"tail "<<tail ->data<<endl;

    deletAtposition(4,head,tail);
    print(head);
    cout<<"head "<<head ->data<<endl;
    cout<<"tail "<<tail ->data<<endl;



    return 0;
}