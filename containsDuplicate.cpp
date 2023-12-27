#include <bits/stdc++.h>
using namespace std;

int remove_duplicate(int arr[], int n)
{
    // code here
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    cout << i + 1 << endl;
    return 0;
}

int main()
{
    int arr[] = {1, 2, 4, 5, 5, 5, 5, 5, 6,6, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    remove_duplicate(arr, n);
    return 0;
}
