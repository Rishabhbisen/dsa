#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] ={1,22,33,44};
    cout<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;//it will print 1+1 mean first index vlaue + 1
    cout<<*(arr+1)<<endl; //it will print third index value
    cout<<*arr+25<<endl; //first value + 25 mean 1+25

    int i = 3;
    cout<<i[arr]<<endl; //it will print 3 index value

    cout<<"second temp array start"<<endl;

    int temp[10] = {1 ,2,3};
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(&temp)<<endl;

    int *ptr = temp;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
    cout<<sizeof(ptr)<<endl;

    cout<<"third"<<endl;

    int a[20] = {1,2,3,4,5}; //4*20
    cout<<sizeof(a[0])<<endl;
    cout<<sizeof(&a)<<endl;
    cout<<sizeof(a)<<endl;

    cout<<"fourth"<<endl;
    // a = a+1; //we cannot increase the size of array
    int *ptr1 = a;
    cout<<ptr1<<endl;  // we can increase the size of pointer
    ptr1 = ptr1 +1;
    cout<<ptr1<<endl;  //we can see our address is changing

    return 0;
}