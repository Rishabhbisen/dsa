#include<bits/stdc++.h>
using namespace std;

int main(){
    //way to decrale the pointer
    int a = 5;
    int *ptr = &a;
    cout<<*ptr<<endl;

    int b = 10;
    int *ptr1;
    ptr1 = &b;
    cout<<*ptr1<<endl;
    cout<<"adress of b is "<<ptr1<<endl;

    double c = 3.19;  //it's size is 8 byte it can stor 15 bite
    double *ptr3 = &c;
    cout<<*ptr3<<endl;

    float d = 4.34;  //it's size is 4 bite it can stor only 7 bit
    float *ptr4 = &d;
    cout<<*ptr4<<endl;

    int arr[] = {1,2,3};
    int *ptr5 = arr;
    cout<<"adress of arr"<<arr<<endl;
    cout<<*ptr5<<endl;  //it will print only first value of array
    cout<<ptr5[0]<<endl;
    cout<<ptr5[1]<<endl;
    cout<<ptr5[2]<<endl;

    cout<<"second array"<<endl;

    int arr1[]= {1,2,3,4,5};
    int *ptr6;
    ptr6 = arr1;
    for(int i = 0; i < 5; i++){
        cout<<*ptr6<<endl;  //trow this loop we can access all the elemant
        ptr6++;
    }

    char ch = 'a';
    char *ptr7 = &ch;
    cout<<*ptr7<<endl;

    char *arr2[3] = {"rishabh","bisen","good"};
    for(char i = 0; i < 3; i++){
        cout<<arr2[i];
        cout<<endl;
    }

    int var1 = 10;
    int var2 = 11;

    const int *ptr8;

    ptr8 = &var1;
    ptr8 = &var2;

    cout<<*ptr8<<endl;
    cout<<*ptr8<<endl;

    //null pointer
    int *ptr9 = NULL;
    cout<<"the value of null pointer is "<<ptr9<<endl;

    return 0;
}