// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;

//     while(t--) {
//         int n;
//         cin >> n;

//         vector<int> a(n);
//         for(int &x : a) cin >> x;

//         int operations = 0;
//         int maxSeen = 0;

//         for(int i = n-1; i >= 0; i--) {
//             if(a[i] > maxSeen) {
//                 operations++;
//                 maxSeen = a[i];
//             }
//         }

//         cout << operations << "\n";
//     }
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int a[n];
//     for(int i = 0; i < n; i++)
//         cin >> a[i];

//     int maxRight = -1;

//     for(int i = n-1; i >= 0; i--) {
//         int temp = a[i];
//         a[i] = maxRight;
//         if(temp > maxRight)
//             maxRight = temp;
//     }

//     for(int i = 0; i < n; i++)
//         cout << a[i] << endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        int mn = a[n-1];
        int ans = 0;

        for (int i = n-2; i >= 0; i--) {
            if (a[i] > mn) ans++;
            else mn = a[i];
        }

        cout << ans << "\n";
    }

    return 0;
}