#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int n, int k){
    int low =0;
    int high =n;
    while(low<=high){
        int mid = low+high/2;
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]>k){
            low = mid-1;
        }
        else{
            high = mid+1;
        }
    }
    return -1;
}

int main(){
     int n;
     cin>>n;

     int arr[n];
     for(int i =0;i<n;i++){
         cin>>arr[i];
     }

     int k;
     cin>>k;
     cout<<BinarySearch(arr,n,k);
    return 0;
}