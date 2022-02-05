#include<iostream>
using namespace std;

//Array with function
void printArray(int arr[],int n){
     
    for(int i=0;i<n;i++){

        cout<<arr[i]<<" ";
    }
    
   
}

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    printArray(arr,n);
    cout<<endl;

    int one[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"size of one elemant is: ";
    int onesize = sizeof(one)/sizeof(int);  // we can get the size of arr
    cout<<onesize;
    cout<<endl;
   
   char ch[5] ={'a','b','c','d','e'};
   cout<<ch<<" "<<endl;
   cout<<ch[4]<<" "<<endl;
   for(int i=0;i<5;i++){

        cout<<ch[i]<<" ";
    }
   
    // float fistfl[3]={1,1.2,1.3};
    //  for(int i=0;i<3;i++){

    //     cout<<fistfl[i]<<" ";
    // }

    // bool firstbool[3]={1,2,1};
    //  for(bool i=0;i<3;i++){

    //     cout<<firstbool[i]<<" ";
    // }
    
    

    return 0;
}