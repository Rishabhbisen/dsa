// pivot index in arr

#include <iostream>
using namespace std;

int pivotindex(int arr[], int n)
{

    int st = 0;
    int end = n - 1;
    int mid = st + (end - st) / 2;
    while (st < end)
    {
        if (arr[mid] >= arr[0])
        {
            st++;
        }
        else
        {
            end = mid;
        }
        mid = st + (end - st) / 2;
    }
    return st;
}

int main()
{

    int arr[5] = {8, 9, 10, 1, 2};

    cout << pivotindex(arr, 5);

    return 0;
}