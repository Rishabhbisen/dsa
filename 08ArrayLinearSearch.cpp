#include<iostream>
using namespace std;

//bool
// bool findkey(int arr[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;
// }

   int findkey(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;   //these gives us index 
        }     //if we return key so this gives us key if not find so this givs us 0
    }
    return 0;
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int key;
    cin>>key;
    cout<<findkey(arr,n,key);
    
    //bool
    // int key;
    // cin>>key;
    // bool found = findkey(arr,n,key);
    // if(found){
    //     cout<<"found";
    // }
    // else{
    //     cout<<"not found";
    // }
    

    return 0;
}