#include<iostream>
using namespace std;

int main(){
    
    int a= 4;
    int b =5;
    
    cout<<"a&b :"<<(a&b)<<endl;
    cout<<"a|b :"<<(a|b)<<endl;
    cout<<"~a :"<<~a<<endl;

    cout<<(4<<2)<<endl;
    cout<<(4<<1)<<endl;
    cout<<(4>>2)<<endl;
    cout<<(4>>1)<<endl;
    cout<<"new"<<endl;
    int i= 4;
    cout<<(i++)<<endl;
    cout<<(++i)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;
    
    int c=10;
    int d=11;
    if(++c){
        cout<<d;
    }
    else{
        cout<<++d;
    }
    cout<<" "<<endl;
    int number =3;
    cout<<(25 * (++number));

    int aa=1,bb=aa++,cc=++aa;
    cout<<bb<<endl;
    cout<<cc<<endl;

    return 0;
}