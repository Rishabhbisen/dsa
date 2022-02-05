#include<iostream>
using namespace std;

int main(){

   int n;
   cin>>n;
   
   bool isprime =1;
   for(int i=2;i<n;i++){
       if(n%i==0){
        //    cout<<"not a prime number";
           isprime=0;
           break;
        // continue;
       }
   }

   if(isprime==0){
       cout<<"NOt a prime nomber";
   }
   else{
       cout<<"yes it is prime nomber";
   }

    return 0;
}