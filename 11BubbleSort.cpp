#include <iostream>
using namespace std;

void bubbleionsort(int arr[], int n)
{
    //    for(int i=1;i<n;i++){   //if we run loop i =0 to n-1 so we have to correction of
    //      for(int j = 0;j<n-i;j++){    // second array n-i-1
    //          if(arr[j]>arr[j+1]){
    //              swap(arr[j],arr[j+1]);    //0(n2)
    //          }
    //      }
    //    }

    for (int i = 1; i < n; i++)
    { // if we run loop i =0 to n-1 so we have to correction of
        for (int j = 0; j < n - i; j++)
        { // second array n-i-1

            bool swapped = false;

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]); // 0(n)
                swapped = true;
            }
            if (swapped == false)
            {
                break;
            }
        }
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

    bubbleionsort(arr, n);
    display(arr, n);

    return 0;
}