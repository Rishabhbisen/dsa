#include<bits/stdc++.h>
using namespace std;

// row wise sum
void printsum(int arr[3][3], int i, int j){
    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < 3; j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
}



//colum wise sum
void printcolsum(int arr[3][3], int i, int j){
    for(int j = 0; j < 3; j++){
        int ans = 0;
        for(int i = 0; i < 3; i++){
            ans += arr[i][j];
        }
        cout<<ans<<" ";
    }
}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    printsum(arr,3,3);

    cout<<endl;

    printcolsum(arr,3,3);

    return 0;
}