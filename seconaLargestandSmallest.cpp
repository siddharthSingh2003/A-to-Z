#include <bits/stdc++.h>

using namespace std;

int getElement(int arr[], int n)
{
    int SecondSmall = 0, SecondLargest = 0;
    sort(arr, arr + n);
    int small = arr[0];
    int large = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        if (small != arr[i])
        {
            SecondSmall = arr[i];
            break;
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (large != arr[i])
        {
            SecondLargest = arr[i];
            break;
        }
    }

    cout << "Second Smallest =>" << SecondSmall << endl;
    cout << "Second Largest =>" << SecondLargest << endl;

    return 0;
}

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    getElement(arr, n);
    return 0;
}