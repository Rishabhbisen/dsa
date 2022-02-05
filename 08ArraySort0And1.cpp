//this is belog to two pointer approch

#include<iostream>
using namespace std;

printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
}

sortarray(int arr[],int n){

    int i =0;
    int j=n-1;
    while(i<j){
        if(arr[i]==0 && arr[j]==1){
            i++;
            j--;
        }
        if(arr[i]!=0 && arr[j]!=1 && i<j){
            swap(arr[i],arr[j]);
        }
    }
}

int main(){
    
    int arr[8]={0,1,0,1,0,1,0,1};
    sortarray(arr,8);
    printarray(arr,8);
  
    return 0;
}