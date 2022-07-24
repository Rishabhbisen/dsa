#include<bits/stdc++.h>
using namespace std;

int main(){

    int row;
    cin>>row;

    int col;
    cin>>col;

    //array creating
    int **arr = new int *[row];
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
    }

    // int n;
    // cin>>n;
    // int **arr = new int *[n];
    // for(int i = 0; i < n; i++){
    //     arr[i] = new int[n];
    // }

    //taking input 
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }


    //printing array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //delete second array
    for(int i = 0; i < row; i++){
        delete []arr[i];
    }

    //delete first array
    delete []arr;

    return 0;
}