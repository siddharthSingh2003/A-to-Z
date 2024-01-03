#include <bits/stdc++.h>
using namespace std;
// brute force
// int longestSubarray(int arr[], int n, int K)
// {
//     int length;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;

//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }

//             if (sum == K)
//             {
//                 length = max(length, j - i + 1);
//             }
//         }
//     }

//     cout << length << endl;

//     return 0;
// }

int longestSubarray(int arr[], int n, int K)
{
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {

            sum += arr[j];

            if (sum == K)
            {
                length = max(length, j - i + 1);
            }
        }
    }

    cout << length << endl;

    return 0;
}
int main()
{
    int arr[] = {2, 3, 5, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int K = 10;
    longestSubarray(arr, n, K);
    return 0;
}