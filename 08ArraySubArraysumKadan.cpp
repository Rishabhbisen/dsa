// sum of array
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int sumArray(int arr[],int n){
    
    int currsum=0;
    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        
        currsum +=arr[i];
        if(currsum <  0){
            currsum = 0;
        }
       maxi =max(maxi,currsum);
    }
    
    return maxi;
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<sumArray(arr,n);

    return 0;
}