#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){

    // we can write the file
    //if we will write with the place of ofstream and ifstream (fstream)
    ofstream out("tuto61.txt");
    cout<<"Enter your name"<<endl;
    string name;
    // cin>>name;
    getline(cin,name);

    out<<name<<endl;

    out.close(); 

    // we can read the file
    ifstream is("tuto61.txt");
    string st;
    // is>>st;  // we can read only one line
    getline(is,st);  // we can read hole paragraph
    cout<<st;

    is.close();



    return 0;
}