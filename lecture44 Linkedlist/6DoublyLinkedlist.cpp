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

    Node* node1 = new Node(10);
    int ans = getlength(node1);
    print(node1);
    cout<<ans;

    return 0;
}