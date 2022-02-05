#include<iostream>
using namespace std;

bool isEven(int a){
    //odd
    if(a&1){
        return false;
    }
    return true;
}
 
int main(){
     
    int num;
    cin>>num;
  if(isEven(num))
{
    cout<<"nomber is even";
}     
else{
    cout<<"nomber is odd";
}
    return 0;
}