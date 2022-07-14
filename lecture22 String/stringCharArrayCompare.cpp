#include<iostream>
#include<string>

using namespace std;

int main(){

    //this is a string
    string name = {'a','b','\0','c','d','\0'};
    cout<<name;

    cout<<endl;

    // this is a char array
    char na[20] = {'a','b','\0','c','d','\0'};
    cout<<na;


    return 0;
}