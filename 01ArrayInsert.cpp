#include <iostream>

using namespace std;

int InsertLeanersearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
            arr[i] == key;
            return arr[i] + key;
        }
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
    int key;
    cin >> key;
    cout << InsertLeanersearch(arr, key, n);

    return 0;
}