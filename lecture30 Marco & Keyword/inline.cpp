#include<bits/stdc++.h>
using namespace std;

inline int getmax(int a, int b){
    return (a>b)?a:b;
}

int main(){
    int a = 1;
    int b = 2;

    int ans = getmax(a,b);
    cout<<ans<<endl;

    a = a + 3;  // it will become 4
    b = b + 1; // it will become 3 
    //maxi output is 4
    
    ans = getmax(a,b);
    cout<<ans<<endl;



    return 0;
}