#include<bits/stdc++.h>
using namespace std;

int fibonachi(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return fibonachi(n-1) + fibonachi(n-2);
}

int main(){

    int n;
    cin>>n;

    int i = 0;
    while(i < n){
        cout<<fibonachi(i)<<" ";
        i++;
    }


    return 0;
}