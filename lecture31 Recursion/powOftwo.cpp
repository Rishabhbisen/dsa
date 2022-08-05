#include<bits/stdc++.h>
using namespace std;

int powere(int n){

    //base case
    if(n == 0){
        return 1;
    }

    return 2* powere(n-1);
}

int main(){

    int n;
    cin>>n;

    int ans = powere(n);

    cout<<ans<<" "<<endl;

    return 0;
}