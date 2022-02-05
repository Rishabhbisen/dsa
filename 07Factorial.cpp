// imp 
// if we use (int) in function we have to write cout<<funtionname(); in main() for printing 
//if we usctf6 e (void) in the function we have to write functionname() in the main function

#include<iostream>
using namespace std;

int factorial(int a){
    int fact =1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
     
     int a;
     cin>>a;
     int ans = factorial(a);
     cout<<ans;
    return 0;
}