//we have to update the array elemant
//if we update the array elemant so both elemant are updated
#include<iostream>
using namespace std;

void update(int arr[],int n){
    arr[0]=100;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    
    // if we update elemant so both elemant array will update
    //ther is no call by refrance
    
    
    int arr[3] ={1,2,3};
    //take input
    update(arr,3);
    cout<<endl;
    for(int i =0;i<3;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}