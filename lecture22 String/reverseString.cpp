#include<iostream>
using namespace std;

//we have to reverse the string so fistly we have to 
//get the size of an string

//this function is for length of the string
int lengthofstring(char str[]){
    int sum = 0;
    for(int i = 0; str[i] != '\0'; i++){
        sum++;
    }
    return sum;
}

//this function is for reverse of the string
void reverse(char str[], int n){
    int st = 0;
    int ed = n-1;
    while(st <= ed){
        swap(str[st++], str[ed--]);
    }
}

int main(){

    char str[200];
    cin>>str;

    int ans = lengthofstring(str);
    // cout<<ans<<endl;  // we get the length of the string

    reverse(str, ans);   //call the reverse function
    cout<<str;



    return 0;
}