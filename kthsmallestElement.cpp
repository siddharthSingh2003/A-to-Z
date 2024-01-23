#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    r = r + 1;
    sort(arr, arr + r);

    return arr[k-1];
}

int main()
{
    int arr[] = {7 ,10, 4, 20, 15};
    
    // int r = n - 1;
    int k = 4;
    int result = kthSmallest(arr, 0, 4, k);
    cout << "Kth Smallest Element: " << result << endl;
    return 0;
}
