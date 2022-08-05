#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    
    return n*factorial(n-1);
    
}

int main(){

    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<ans<<" ";
    




    // this is a simple way to get the factorial
    // int fact = 1;

    // for(int i = 1; i <= n; i++){
    //     fact = fact*i;
    // }

    // cout<<fact<<" ";

    return 0;
}