#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if (s == t)
    {
        cout << "IS anagram" << endl;
    }
    else
    {
        cout << "IS not anagram" << endl;
    }
}