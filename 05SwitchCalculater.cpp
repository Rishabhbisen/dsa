#include<iostream>
using namespace std;


int main(){
    
    int a;
    cout<<"enter the nomber of a: "<<endl;
    cin>>a;

    int b;
    cout<<"enter the nomber of b: "<<endl;
    cin>>b;

    char op;
    cout<<"enter opertion: "<<endl;
    cin>>op;

    switch(op){

        case '+': cout<<(a+b)<<endl;
        break;

        case '-': cout<<(a-b)<<endl;
        break;

        case '/': cout<<(a/b)<<endl;
        break;
        
        case '*': cout<<(a*b)<<endl;
        break;

        case '%': cout<<(a%b)<<endl;
        break;

        case '&': cout<<(a&b)<<endl;
        break;
        
        default:
        cout<<"sorry for the wrong answer"<<endl;
    }

    return 0;
}