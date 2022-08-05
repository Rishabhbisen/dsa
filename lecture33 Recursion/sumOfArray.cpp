#include<bits/stdc++.h>
using namespace std;

int  sum(int *arr, int size){

    //base case
   if(size == 0 )return 0;

    //if(size == 1)return arr[0];
    //details -- (process)
    // int ans = sum(arr+1,size-1);
    // int sum = arr[0] = ans;
    // return sum;
    //recursive relation


    //another way
    return arr[0] + arr[1] + sum(arr++,size-1);

}

int main(){

    int arr[5] = {1,2,3,4,5};

    int size = 5;

    int ans = sum(arr,size);

    cout<<ans<<" ";


    return 0;
}