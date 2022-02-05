// we can easily get fibonachi nomber

#include<iostream>
using namespace std;

int main(){
   
    int n;
    cin>>n;

    int a =0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++){
        int nextNom = a+b;
        cout<<nextNom<<" ";
        a=b;
        b=nextNom;
    }

    return 0;
}