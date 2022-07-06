#include <iostream>
using namespace std;

// void insertionsort(int arr[],int n){

//     for(int i = 1;i < n;i++){
//         int temp = arr[i];
//         int j = i-1;
//         for(; j>=0;j--){
//             if(arr[j]>temp){
//                 arr[j+1]= arr[j];
//             }
//             else {
//                 break;
//             }
//         }
//         arr[j+1] = temp;
//     }
// }

// using while loop
void insertionsort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 and arr[j] > temp)
        {

            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionsort(arr, n);
    display(arr, n);

    return 0;
}