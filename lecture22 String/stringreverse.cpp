#include<bits/stdc++.h>
using namespace std;

void reverse(string &name){
    int n = name.length();
    int st = 0;
    int end = n-1;
    while(st < end){
       swap(name[st++], name[end--]);
    }
}

int main(){

    string name = "rishabh";
    // reverse(name.begin(), name.end());
    // cout<<name;
    reverse(name);
    cout<<name;

    return 0;
}