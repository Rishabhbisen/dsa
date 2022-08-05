#include<bits/stdc++.h>
using namespace std;

int power(int a, int b){

    //base case
    if(b == 0)return 1;

    if(b == 1)return a;

    int ans = power(a, b/2);

    //if b is even
    if(b%2==0){
        return ans * ans;
    }
    else{
        //b&1 is for odd
        //if b is odd
        return a * ans * ans;
    }

}

int  main(){

    int a,b;
    cin>>a>>b;

    int ans = power(a,b);

    cout<<ans<<endl;

    return 0;
}

//simeple way
// int a;
//     cin>>a;

//     int b;
//     cin>>b;

//     int ans = 1;
//     for(int i = 0; i < b; i++){
//         ans = ans*a;
//     }
//     cout<<ans;