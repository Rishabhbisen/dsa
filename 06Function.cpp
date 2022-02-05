#include<iostream>
using namespace std;

int power(int num1,int num2){   //function
    int ans =1;
    for(int i=1;i<=num2;i++){
        ans = ans * num1;
    }
    return ans;
}

int main(){
    
    int a,b;
    cin>>a>>b;

    // cout<<power(a,b);
    int anser =power(a,b);
    cout<<anser;
 
    return 0;
}