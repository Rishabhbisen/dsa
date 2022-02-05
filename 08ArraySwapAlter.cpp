//swap alternative 
//int a[10] = {1,2,3,4,5,6,7,8,9,10}
//out = {2,1,4,3,6,5,8,7,10,9
}

#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void swaparray(int arr[],int n){
    
    for(int i=0;i<n;i+=2){

        if(arr[i]!=0){      //we can use (i+1<n) and (i+1!=0) and so many condition
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    swaparray(arr,10);
    printarray(arr,10);

    return 0;
}