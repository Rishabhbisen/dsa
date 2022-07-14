#include<iostream>
using namespace std;

//conver A to a 
char lowercase(char ch){
    if(ch >= 'a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' +'a';
        return temp;
    }
}


//palindrome check function
bool checkpalindrom(char a[], int n){
    int s = 0;
    int ed = n-1;
    while(s < ed){
        if(a[s] != a[ed]){
            return false;
        }
        else{
            s++;
            ed--;
        }
    }
    return true;
}

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
    // cout<<str;   //this is only for reverse

    cout<<checkpalindrom(str,ans)<<endl;   // this function will check 

    cout<<lowercase('b')<<endl;
    cout<<lowercase('C')<<endl;

    return 0;
}