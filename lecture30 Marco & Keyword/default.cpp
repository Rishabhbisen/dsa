#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n, int st = 0){
    for(int i = st; i < n; i++){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};

    print(arr,5,2);  // defult value is 2

    cout<<"new arry"<<endl;

    print(arr,5);  // we did not provide default value so it will start from 0

    return 0;
}