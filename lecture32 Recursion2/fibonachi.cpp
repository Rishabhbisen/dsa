#include<bits/stdc++.h>
using namespace std;

void fibonachi(int n){
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

    int ans = fibonachi(n);

    cout<<ans<<" ";

    //it will print only one nomber




    // simple way to get fibonachi
    //  int n;
    // cin>>n;

    // int a = 1;
    // int b = 2;

    // cout<<a<<" "<<b<<" ";
    // for(int i = 1; i < n; i++){

    // int c = a + b;
    // cout<<c<<" ";
    // a = b;
    // b = c;

    // }

    return 0;
}