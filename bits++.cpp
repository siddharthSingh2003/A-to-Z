#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string s;
    int X = 0;
    while (t--)
    {
        cin >> s;

        if (s == "X++" || s == "++X")
        {
            X++;
        }
        else
        {
            X--;
        }
    }
    cout << X;
    return 1;
}