// we can easily get fibonachi nomber

#include<iostream>
using namespace std;

int main(){
   
    int n;
    cin>>n;
    int key;
        cin>>key;

    int a =0,b=1;
    // cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++){
        int nextNom = a+b;
        cout<<nextNom<<" ";
        a=b;
        b=nextNom;
        // int key;
        // cin>>key;
        if(nextNom >key){
            return nextNom;
        }
    }

    return 0;
}