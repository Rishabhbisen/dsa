#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr1[3][3];
    int arr2[3][3];
    int sum[3][3];

    cout<<"taking input for arr1"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>arr1[i][j];
        }
    }
    
    cout<<"taking input for arr2"<<endl;
     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>arr2[i][j];
        }
    }

    cout<<"sum of both"<<endl;
     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
        
    }

     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}