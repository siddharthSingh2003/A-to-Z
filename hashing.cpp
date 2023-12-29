#include <iostream>
#include <vector>
using namespace std;

int count(int n, vector<int> arr)
{
    int con = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == n)
        {
            con++;
        }
    }
    return con;
}

int main()
{
    vector<int> arr = {0, 2, 1, 3, 4, 4,5,5, 2, 4};
    int res = count(2, arr);
    cout << res << endl;
    return 0;
}
