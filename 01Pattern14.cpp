#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    int row =1;
    while(row<=n){
 
        // print first tringal
        int space =n-row;
        while(space){
            cout<<" ";
            space =space-1;
        }

        // second
        int col =1;
        while(col<=row){
          
           
            cout<<col;
            col =col+1;
        }

        int st = row-1;
        while(st){
            cout<<st;
            st=st-1;
        }

        cout<<endl;
        row=row+1;
    }

    return 0;
}