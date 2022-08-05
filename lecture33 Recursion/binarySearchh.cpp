#include<bits/stdc++.h>
using namespace std;

int  sum(int arr[], int st, int end, int key){

    //base case
    if(st > end)return false;
    
    int mid = st + (end-st)/2;
    
    if(arr[mid] == key)return true;


    if(arr[mid] < key){
        return sum(arr,mid+1,end,key);
    }
    else{

    return sum(arr,st,mid-1,key);
    }
      
}

int main(){

    //if we are using binary so array will be sorted
    int arr[6] = {1,3,5,7,9,10};

    int n = 6;
    int st = 0;
    int end = n-1;

    int key = 9;

    // bool ans = binaryserch(arr,n,key,0,5);

    cout<<"present or not "<< sum(arr,st,end,key); //sequnce is metter

    return 0;
}