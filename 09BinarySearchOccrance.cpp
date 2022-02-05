// we have to find first occurance and last occurance of the array
#include<iostream>
using namespace std;

int firstOccurance(int arr[],int n,int key){
    int st=0;
    int end =n-1;
    int mid=st+(end-st)/2;
    int ans =-1;  //if elemant will not be present in the array so we will return -1
    while(st<=end){
        if(arr[mid]==key){
          ans = mid;
          end = mid-1;
        }
        else if(key>arr[mid]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
        mid= st+(end-st)/2;
    }
    return ans;
}

int lastOccurance(int arr[],int n,int key){
    int st=0;
    int end =n-1;
    int mid=st+(end-st)/2;
    int ans =-1 ; //if elemant will not be present in the array so we will return -1
    while(st<=end){
        if(arr[mid]==key){
          ans = mid;
          st = mid+1;
        }
        else if(key>arr[mid]){
            st = mid+1;
        }
        else{
            end = mid-1;
        }
        mid= st+(end-st)/2;
    }
    return ans;
}

int main(){
    
    int arr[11]= {1,2,2,2,2,2,3,4,5,6};
    
    cout<<"first nomber of occurance :"<<firstOccurance(arr,11,2)<<endl;
    cout<<"last nomber of occurance  : "<<lastOccurance(arr,11,2)<<endl;
    int totaloccurance = (lastOccurance(arr,11,2)-firstOccurance(arr,11,2))+1;
    cout<<"total nomber of occurance : "<<totaloccurance;
     
    return 0;
}