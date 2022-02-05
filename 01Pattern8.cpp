#include<iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;

    int row =1;
    while(row<=n){
        int col =1;
        char ch = 'A';
        while(col<=row){
            ch = 'A'+row-1;
            cout<<ch;
            col =col+1;
        }
        cout<<endl;
        row = row+1;
    }
    
    return 0;
}