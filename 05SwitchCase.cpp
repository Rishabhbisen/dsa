#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    while(1){
    switch(n){
        case 1: cout<<"Nomber is one"<<endl;
                 break;   //if we will not use break so our condition will continue next case
        case 2: cout<<"nomber is two"<<endl;
                break;   // we can not use continue statmant
        default: cout<<"nomber is not match"<<endl;
    }
    exit(1);   //with the use of exit() function we can stop the infinite loop
    }

    return 0;
}