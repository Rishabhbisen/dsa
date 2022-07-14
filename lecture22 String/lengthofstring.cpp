#include<iostream>
using namespace std;

int lengthofstring(char name[]){
    int sum = 0; // we will count all the char
    for(int i = 0; name[i] != '\0'; i++){
        sum++;
    }
    return sum;
}

int main(){

    char a[20] = "rishabhbisen";
    int ans = lengthofstring(a);
    cout<<"length of the string : "<<ans;

    return 0;
}