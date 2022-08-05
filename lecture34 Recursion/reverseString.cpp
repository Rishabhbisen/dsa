#include<bits/stdc++.h>
using namespace std;

//pass by referance & pass karna hoga
void reverse(string &name,int i, int j){
    //base case
    if(i > j) return ;
    
    swap(name[i++],name[j--]);
   

    reverse(name,i,j);
}

int main(){

    string name = "rishabh";

    int i = 0;
    int j = name.length()-1;


    reverse(name,i,j);
    cout<<name;

    return 0;
}