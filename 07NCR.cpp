// in this code we have to describe the value of ncr 8Cr
#include<iostream>
using namespace std;

int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact =fact*i;
    }
    return fact;
}

int ncr(int n , int r){
     int num = factorial(n);
     int denum = factorial(r)*factorial(n-r);
     int ans = num/denum;
     return ans;
}

int main(){
    
    int a ,b;
    cin>>a>>b;
    // int anser = ncr(a,b);
    // cout<<anser;
    cout<<ncr(a,b); 

    return 0;
}