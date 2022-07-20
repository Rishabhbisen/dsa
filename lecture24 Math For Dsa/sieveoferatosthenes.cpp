#include<bits/stdc++.h>
using namespace std;

int  sieveOfEratosthenes(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    int cnt = 0;
    for(int i = 2; i < n; i++){
        if(prime[i]){
            cnt++;
        }
        for(int j = 2*i; j < n; j = j+i){
            prime[j] = false;
        }
    }
    return cnt;
}

int main(){

    int n;
    cin>>n;
    int ans = sieveOfEratosthenes(n);
    cout<<ans;
   

    return 0;
}