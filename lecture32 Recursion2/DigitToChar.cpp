#include<bits/stdc++.h>
using namespace std;

void saydigit(string arr[],int n){

    //base case
    if(n==0)return ;

    //recursive call
    int digit = n%10;
    n/=10;
    
    saydigit(arr,n);

    cout<<arr[digit]<<" ";

}

int main(){

    string arr[10] = {"zero","one","two","three","four",
    "five","six","saven","eigth","nine"};

    int n;
    cin>>n;

    saydigit(arr,n);

    return 0;
}
















//one way 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int n;
//     cin>>n;

//     int sum = 0;
//     int rem;
//     while(n!=0){
//         rem = n%10;
//         sum = sum*10+rem;
//         n=n/10;
//     }
    
//     int m = sum;

//     while(m!=0){
//         rem = sum%10;
//         sum/=10;
//         switch(rem){
//             case 1:
//             cout<<"one ";
//             break;
//             case 2:
//             cout<<"two ";
//             break;
//             case 3:
//             cout<<"three ";
//             break;
//             case 4:
//             cout<<"four ";
//             break;
//             cout<<"five ";
//             break;
//             case 6:
//             cout<<"six ";
//             break;
//             case 7:
//             cout<<"seven ";
//             break;
//             case 8:
//             cout<<"eigth ";
//             break;
//             case 9:
//             cout<<"nine ";
//             break;
        
//         }
//     }

    

//     return 0;
// }