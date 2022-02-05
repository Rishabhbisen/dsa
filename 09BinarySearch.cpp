#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int n,int key){

    int st = 0;
    int end =n-1;
    int mid = st+(end-st)/2;
    while(st<=end){
        if(arr[mid]==key){
            return mid;
        }
       if(key>arr[mid]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = st+(end-st)/2;
    }
  return -1;
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

   cout<<binarysearch(arr,n,key);



    return 0;
}