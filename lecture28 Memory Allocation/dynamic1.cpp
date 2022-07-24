#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int k;
    cin>>k;
    string *st1 = new string[k];
    for(int i = 0; i < k; i++){
        cin>>st1[i];
    }

    for(int i = 0; i < k; i++){
        cout<<st1[i]<<" ";
    }

    delete []st1;

    return 0;

}
