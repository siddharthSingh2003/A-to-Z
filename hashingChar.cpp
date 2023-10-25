#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // precompute
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char d;
        cin >> d;
        // fetch

        cout << hash[d] << endl;
    }
    return 0;
}