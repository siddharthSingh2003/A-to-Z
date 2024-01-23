#include <bits/stdc++.h>
using namespace std;

int kthsmallest(int arr[], int n)
{

    // int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    cout << arr[5];
    return 1;
}

int main()
{
    int arr[] = {2, 4, 5, 4, 2, 6, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    kthsmallest(arr, n);
    return 0;
}