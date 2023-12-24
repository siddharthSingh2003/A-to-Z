#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    string str = "Hello, World!";

    // Sort the string in ascending order
    sort(str.begin(), str.end());

    // Print the sorted string
    cout << str << endl;

    return 0;
}