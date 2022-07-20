#include<bits/stdc++.h>
using namespace std;

bool find(int arr1[3][3],int target, int i, int j){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr1[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int arr[3][3]= {1,2,3,4,5,6,7,8,9};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"second "<<endl;

    int name[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"third"<<endl;
    //taking input of 2d array
    int arr1[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin>>arr1[i][j];
        }
        cout<<endl;
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter targer key"<<endl;

    int target;
    cin>>target;

    if(find(arr1,target,3,3)){
        cout<<"find";
    }
    else
    {
        cout<<"not find";
    }

    return 0;
}