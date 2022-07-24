#include<bits/stdc++.h>
using namespace std;

void update(int n){
    n= n+1;
}

void update1(int &n){
    n= n+1;
}

//we can give difranr name in function it will not effect
void update2(int &m){ 
    m = m+1;
}

int main(){

    int a = 5;
    int &b = a;
    cout<<a<<endl;
    cout<<b<<endl;

    a++;
    cout<<a<<endl;
    b++;
    cout<<b<<endl;

    cout<<"function calling"<<endl;

    int n = 7;
    
    update(n);
    cout<<"this is called call by value :"<<n<<endl;  // value will not change

    update1(n);
    cout<<"this is callled call by refrance :"<<n<<endl;  //value will be change because we are using refrance 

    update2(n);
    cout<<"we pass m in function it does't effect :"<<n<<endl;
    return 0;
}