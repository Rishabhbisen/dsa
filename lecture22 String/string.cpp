#include<bits/stdc++.h>
using namespace std;

int main(){

    string name;
    // string name = "this is me"; 
    cin>>name;
    cout<<name.length();
    cout<<endl;
    cout<<name;
    
    string str;
    getline(cin, str); // we can take full line input
    // cin>>str;
    cout<<str;

    string he = {'a','b','\0'};
    cout<<he;
    


    return 0;
}