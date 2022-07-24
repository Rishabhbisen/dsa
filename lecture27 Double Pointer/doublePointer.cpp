#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 5;
    int *p = &a;
    int **p2 = &p;

    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;


    return 0;
}