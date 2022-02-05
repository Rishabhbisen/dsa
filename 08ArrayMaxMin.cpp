#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//we have to get minimum & maximum value in array
int getmin(int arr[],int n){
    //decrale variable 
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        // if(arr[i]<mini){
        //     mini = arr[i];
        // }
        mini = min(mini,arr[i]);
    }
    return mini;
}

int getmax(int arr[],int n){
    //decrale variable
    int maxi = INT_MIN;
    for(int i =0;i<n;i++){
        // if(arr[i]>maxi){
            
        //     maxi = arr[i];
        // }
        maxi =max(maxi,arr[i]);
    }
    return maxi;
}

int main(){
   
    int n;
    cin>>n;
    int arr[100];   // we make array with the variable name but now we are making a number of array
    //take arr input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"minimum is: "<<getmin(arr,n)<<endl;
    cout<<"maximum is: "<<getmax(arr,n)<<endl;

    return 0;
}