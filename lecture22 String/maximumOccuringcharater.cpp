#include<bits/stdc++.h>
using namespace std;

char charlength(string s){
    int arr[26] = {0};
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    int maxi = 0,ans = 0;
    for(int i = 0; i < 26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a' + ans;
}

int main(){

    string s;
    getline(cin, s);  // we can take the full line of input
    cin>>n; // we can take the single input 

    cout<<charlength(s);


    return 0;
}