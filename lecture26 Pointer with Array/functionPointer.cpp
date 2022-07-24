#include<bits/stdc++.h>
using namespace std;

void print(int *ptr){
    cout<<ptr<<endl;  //it will print address 
    cout<<*ptr<<endl;  //it will print value of ptr
}

void update(int *ptr){
    *ptr = *ptr + 1;
}

int getsum(int arr[], int n){ // we can write *arr both are same
    // cout<<sizeof(*arr)<<endl;
    cout<<"size :"<< sizeof(*arr)<<endl;
    cout<<"size :"<< sizeof(arr)<<endl;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int value = 5;
    int *ptr = &value;

    print(ptr);
    update(ptr);
    cout<<*ptr<<endl;  

    int arr[5] = {1,2,3,4,5};
    int ans = getsum(arr,5);
    cout<<ans<<endl;  

    return 0;
}