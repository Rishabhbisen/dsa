#include<bits/stdc++.h>
using namespace std;

void printRow(int arr[3][3],int row, int col){
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 3; col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
}

void printlargest(int arr[3][3], int row, int col){
    int maxi = INT_MIN;
    int rowInde = 0;
    for(int row = 0; row < 3; row++){
        int sum = 0;
        for(int col = 0; col < 3; col++){
            sum += arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowInde = row;
        }
    }
    cout<<"largest value in row is :"<<maxi<<endl;  // we can print largest row value
    cout<<"row index is :"<< rowInde;
}

int main(){
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    cout<<"total row sum is :"<<endl;

    printRow(arr,3,3);

    cout<<endl;

    printlargest(arr,3,3);

    return 0;
}