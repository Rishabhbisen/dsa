#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    //constructor call
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

};

int main(){

    Node* node1 = new Node(10);  //dynamically node created
    Node* node2 = new Node(11);  //dynamically node created
    Node* node3 = new Node(12);  //dynamically node created
        
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    cout<<node2->data<<endl;
    cout<<node2->next<<endl;

    cout<<node3->data<<endl;
    cout<<node3->next<<endl;

    return 0;
}