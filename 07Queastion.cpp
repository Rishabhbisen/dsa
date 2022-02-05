// in this queastion we have to write a function 
// to give a value

#include<iostream>
using namespace std;

int apnomber(int n){
    int ans =0;
    for(int i =1;i<=n;i++){
        ans = 3*n+7;
    }
    return ans;
}

int main(){
   
   int n;
   cin>>n;
   cout<<apnomber(n);

    return 0;
}