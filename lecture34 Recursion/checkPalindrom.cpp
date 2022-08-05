#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &name, int st, int end){
    
    //base case
    if(st > end) return false;

    if(name[st] == name[end])return true;

    else return palindrome(name,st+1,end+1);
    
}

int main(){

    string name = "aba";

    int st = 0;
    int end = name.length()-1;

    bool ans = palindrome(name,st,end);

    if(ans){
        cout<<"it is palindrome ";
    }
    else{
        cout<<"not palindrome ";
    }

    return 0;
}