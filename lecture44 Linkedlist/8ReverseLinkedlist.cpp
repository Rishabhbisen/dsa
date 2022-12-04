// #include<bits/stdc++.h>
// using namespace std;

// class Node{

//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
// };

// void InsertAtHead(Node* &head, int d){
//     if(head == NULL){
//         Node* temp = new Node(d);
//         head = temp;
//     }
//     else{
//      Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;
//     }
    
// }

// //recursive way to reverse
// Node* reverse(Node* &head){

//     if(head -> next == NULL || head == NULL)return head;

//      Node* temp = reverse(head -> next);
//         head->next->next = head;
//         head -> next = NULL;
//         return temp;
// }



// void print(Node* &head){

//     Node* temp = head;
//     while((temp != NULL)){
//         cout<< temp ->data <<" ";
//         temp = temp -> next ;
//     }
//     cout<<endl;
// }

// int main(){

//     Node* head = NULL;
//     print(head);

//     InsertAtHead(head, 1);
//     InsertAtHead(head,2);
//     InsertAtHead(head,3);
//     InsertAtHead(head,4);
//     print(head);
    
//     cout<<"RECURSIVE"<<endl;

//     Node* newhead = reverse(head);
//     print( newhead);


//     return 0;
// }


//ITERATIVE APPROCH 

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

// recursive way to reverse
Node* reverse(Node* &head){

    if(head -> next == NULL)return head;

     Node* temp = reverse(head -> next);
        head->next->next = head;
        head -> next = NULL;
        return temp;
}

Node* reverse1(Node* &head){

    Node* curr = head;
    Node *prev = NULL;
    Node *next = head -> next;
    
    //iterative approch
    while(curr != NULL){
      curr -> next = prev;
      prev = curr;
      curr = next;
      if(next != NULL) next = next -> next;
    }
   return prev;
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

    Node* head = NULL;
    // print(head);

    InsertAtHead(head, 1);
    InsertAtHead(head,2);
    InsertAtHead(head,3);
    InsertAtHead(head,4);
    print(head);
    
    cout<<"after the reverse"<<endl;

    Node* newhead = reverse(head);
    print(newhead);


    return 0;
}
