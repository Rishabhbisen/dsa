#include<bits/stdc++.h>
using namespace std;

//time complexcity - 0(n log n)

void merge(int *arr, int st, int end){

    int mid = (st+end)/2;

    int len1 = mid - st + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];
    
    //copy
    int k = st;

    for(int i = 0; i < len1; i++){
        first[i] = arr[k++];
    }

    for(int i = 0; i < len2; i++){
        second[i] = arr[k++];
    }

    //merge
    int index1 = 0;
    int index2 = 0;

    k = st;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[k++] = first[index1++];
        }
        else{
            arr[k++] = second[index2++];
        }
    }

    while(index1 < len1){
        arr[k++] = first[index1++];
    }

    while(index2 < len2){
         arr[k++] = second[index2++];
    }
}

void mergesort(int *arr, int st, int end){

    //base case
    if(st >= end){
        return ;
    }

    int mid = (st + end)/2;

    mergesort(arr,st,mid);
    
    mergesort(arr,mid+1,end);

    merge(arr,st,end);
}

int main(){
    
    int arr[15] = {9,2,6,4,3,7,1,5,0,4,9,55,3,99,66};

    int n = 15;

    mergesort(arr,0,n-1);

    for(int i = 0; i < n; i++){
        cout<<arr[i]<< " ";
    }

    return 0;
}