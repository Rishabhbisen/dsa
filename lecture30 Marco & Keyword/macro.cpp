#include<bits/stdc++.h>
#define pi 3.14 //we can change macros from here and value change all over the program
#define instagram followers
#define followers 138
#define ele 1, \
            2,\
            3
// #define date 31

using namespace std;

int main(){
    int a = 5;
    // double pi = 3.14; 
    // pi = pi+1;  we can not modify the value of macro
    cout<<pi*a<<endl;
    cout<<"my instagram followers is "<<instagram<<"k"<<endl;
    // cout<<date<<endl;
    cout<<"This is line no.:"<< __LINE__<<endl;     // 7
    cout<<"Name of this file:"<< __FILE__<<endl;   // macros.c
    cout<<"Current Date:"<< __DATE__<<endl;        // Jan 10 2022
    cout<<"Current Time:"<< __TIME__<<endl;        // 12:17:35

    int arr[] = {ele};
    for(int i = 0; i < 3; i++){
        cout<<arr[i]<<endl;
    }
   


    return 0;
}