#include<iostream>
using namespace std;

//void is not return any function
void printcount(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    
    int n;
    cin>>n;
    printcount(n);
    

    return 0;
}