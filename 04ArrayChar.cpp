#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    char arr[n+1];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
    bool check =true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            check= false;
            break;
        }
    }
    
    if(check==true){
        cout<<"word is parindrom";
    }
    else{
        cout<<"word is not parindrom";
    }

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<arr;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<"";
    // }

    return 0;
}