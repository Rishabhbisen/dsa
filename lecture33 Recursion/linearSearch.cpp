#include<bits/stdc++.h>
using namespace std;

//we can how program work


void print(int arr[], int n){
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int linear(int arr[],int n, int key){

    print(arr,n);

    //base case
    if(n == 0)return false;

    if(arr[0] == key || arr[1] == key)return true;

    return linear(arr+1,n-1,key);


}

int main(){

    int arr[5] = {1,5,3,4,6};

    int n = 5;

    int key = 5;

    int ans = linear(arr,n,key);

    if(ans){
        cout<<"elemant found";
    }
    else{
        cout<<"elemant not found";
    }

    return 0;
}