#include<bits/stdc++.h>
using namespace std;

void bubbleionsort(int *arr, int n){

    //BASE CASE
    if(n == 0 || n == 1) return ;

    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]) //if we use i+1 so we have to run our loop till n-1
        {
            swap(arr[i],arr[i+1]);
        }
    }

    bubbleionsort(arr,n-1);
}

int main(){

    int arr[5] = {5,3,4,2,1};

    bubbleionsort(arr,5);

    for(int i = 0; i < 5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}