#include <bits/stdc++.h>
using namespace std;
int main
{
    largest();
}
int arr[], n;
cin >> n;
for (int i = 0; i <= n; i++)
{
    cin >> arr[i];
}
int largest(arr[], n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
