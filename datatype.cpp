#include <bits/stdc++.h>
using namespace std;
int dataTypeSize(string str)
{
    // your code here
    if (str == "Character")
    {
        cout << sizeof(char) << endl;
    }
    else if (str == "Integer")
    {
        cout << sizeof(int) << endl;
    }
    else if (str == "Long")
    {
        cout << sizeof(long) << endl;
    }
    else if (str == "Float")
    {
        cout << sizeof(float) << endl;
    }
    else if (str == "Double")
    {
        cout << sizeof(double) << endl;
    }
}
int main()
{
    dataTypeSize("Double");
    return 4;
}