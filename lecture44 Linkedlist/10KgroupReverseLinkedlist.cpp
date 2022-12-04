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

int length(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}


Node* reverseKgroup(Node* &head, int k, int len){
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;

    if(head == NULL){
        return NULL;
    }

    if(len < k){
        return head;
    }

    while(curr != NULL && count < k){
        next = curr -> next;
        curr ->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(next != NULL){
        head ->next = reverseKgroup(next,k,len-k);
    }

    return prev;
}

Node* reverseKgroup1(Node* &head, int k){
    int len = length(head);
    return reverseKgroup(head,k,len);
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
    
    InsertAtHead(head,1);
    InsertAtHead(head,2);
    InsertAtHead(head,3);
    InsertAtHead(head,4);
    InsertAtHead(head,5);
   
    print(head);

    cout<<"after k group reverse "<<endl;
    
    Node* temp = head;

    temp =  reverseKgroup1(head,3);
    print(temp);



    return 0;
}