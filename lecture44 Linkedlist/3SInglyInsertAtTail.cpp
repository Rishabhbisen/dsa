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

void InsertAttail(Node* &tail, int d){

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void print(Node* &tail){
    Node* temp =  tail;
    while((temp != NULL)){
        cout<<temp -> data<<" ";
        temp = temp -> next; 
    }
    cout<<endl;
}

int main(){

    //agar yaha par node nhi hoti to ya node NULL hoti to 
    //code given belov
    Node* node1 = new Node(10);

    Node* tail = node1;
    print(tail);

    InsertAttail(tail,12);
     print(tail);
    InsertAttail(tail,13);
     print(tail);
    InsertAttail(tail,14);
     print(tail);
    InsertAttail(tail,15);
     print(tail);
    InsertAttail(tail,16);
    print(tail);

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// class Node{

// public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }

// };

// void InsertAttail(Node* &tail, Node* &head, int d){
//   if(tail == NULL){
//     Node* temp = new Node(d);
//     tail = temp;
//     head = temp;
//   }
//   else{
//   Node* temp = new Node(d);

//     tail -> next = temp;
//     tail = tail -> next;
//   }
   
// }

// void print(Node* &tail){
//     Node* temp =  tail;
//     while((temp != NULL)){
//         cout<<temp -> data<<" ";
//         temp = temp -> next; 
//     }
//     cout<<endl;
// }

// int main(){

//     // Node* node1 = new Node(10);
//     Node* tail = NULL;
//     Node* head = NULL;
//     // Node* tail = node1;
//     // print(tail);

//     InsertAttail(tail,head,12);
//      print(tail);
//     InsertAttail(tail,head,13);
//      print(tail);
//     InsertAttail(tail,head,14);
//      print(tail);
//     InsertAttail(tail,head,15);
//      print(tail);
//     InsertAttail(tail,head,16);
//     print(tail);

//     return 0;
// }
