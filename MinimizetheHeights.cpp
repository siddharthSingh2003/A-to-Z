#include<bits/stdc++.h>
using namespace std;
int getMinDiff(int arr[], int n, int k)
{
    // code here
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < k)
        {
            arr[i] = arr[i] + k;
        }
        else
        {
            arr[i] = arr[i] - k;
        }
    }

    // max
    int maxelement = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxelement)
        {
            maxelement = arr[i];
        }
    }

    int minelement = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < minelement)
        {
            minelement = arr[i];
        }
    }

    return maxelement - minelement;
}


int main(){
    int arr[] = {7, 6, 3, 5};
    int n = 4;
    int k = 1;

    cout<<getMinDiff(arr, n, k)<<endl;
}
