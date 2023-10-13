#include <bits/stdc++.h>
using namespace std;

void printTriangle(int n)
{
    // code here
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;

    printTriangle(n);
    return 0;
}
