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
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            i++;
            // j--;
        }
        
    }
}

int main(){
    
    int arr[10]={0,1,0,1,0,1,0,1,2,2};
    sortarray(arr,10);
    printarray(arr,10);
  
    return 0;
}