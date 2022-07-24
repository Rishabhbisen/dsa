#include<bits/stdc++.h>
using namespace std;

int main(){
    int *p = new int;
    *p = 23;
    cout<<*p<<endl;

    delete p;

    char *ch = new char;
    *ch = 'a';
    cout<<*ch<<endl;

    delete ch;

    string *st = new string;
    *st = "rishabh";
    cout<<*st<<endl;

    delete st;

    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    for(int i  = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    delete []arr;

    cout<<endl<<"enter char"<<endl;

    int m;
    cin>>m;
    char *ch1 = new char[m];
    for(int i = 0; i < m; i++){
        cin>>ch1[i];
    }

    for(int i = 0; i < m; i++){
        cout<<ch1[i]<<" ";
    }

    delete []ch1;


    return 0;
}