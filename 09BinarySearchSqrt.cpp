// squar of any nomber
// we can get float digit in this programme

#include <iostream>
using namespace std;

double binarysearch(int n)
{

    double st = 0;
    double end = n;
    double mid = st + (end - st) / 2;
    double ans = 0;

    while (st <= end)
    {

        double sqrt = mid * mid;

        if (sqrt == n)
        {
            return mid;
        }

        if (sqrt >= n)
        {
            end = mid - 1;
        }

        if (sqrt <= n)
        {

            ans = mid;
            st = mid + 1;
        }

        mid = st + (end - st) / 2;
    }

    return ans;
}

double moreprecision(int n, int precision, int temp)
{

    double factor = 1;
    double ans = temp;

    for (int i = 0; i < precision; i++)
    {

        factor = factor / 10;
        // 0.1 0.01
        for (double j = ans; j * j < n; j = j + factor)
        {

            ans = j;
        }
    }
    return ans;
}

int main()
{

    int n;
    cout << "Enter the nomber " << endl;
    cin >> n;

    int temp = binarysearch(n);
    cout << "anser " << moreprecision(n, 3, temp);

    return 0;
}