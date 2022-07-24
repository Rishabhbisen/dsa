#include<bits/stdc++.h>
using namespace std;

int main(){
    
    char ch[20] = "rishabh";
    cout<<ch<<endl;

    char *c = &ch[0];
    cout<<&c<<endl;
    cout<<c<<endl;
    cout<<ch<<endl;
    cout<<&ch<<endl;

    char temp = 'a';
    char *ptr1 = &temp;
    cout<<ptr1<<endl;  //it will print address of temp

    return 0;
}