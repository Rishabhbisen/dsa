#include<bits/stdc++.h>
using namespace std;

bool binaryserch(int *arr, int n){

    //base case
    if(n==0 || n == 1)return true;

    if(arr[0] > arr[1])return false;

    else return binaryserch(arr+1,n);  
    //in return we have to return both arr and its size other wise it will show an error

}

int main(){

    int arr[5] = {1,3,2,4,5};

    int n = 5;  //size

    bool ans = binaryserch(arr,n);

    if(ans){
        cout<<"Array is Sorted";
    }
    else
    {
        cout<<"Array is not Sorted";
    }

    return 0;
}