#include <bits/stdc++.h>

using namespace std;

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    int factorial = n * fact(n - 1);

    return factorial;
}
int pascalTriangle(int row, int col){
    int r = row - 1;
    int c = col - 1;

    int result = fact(r) / (fact(c) * fact(r - c));

    return result;
}
int main()
{
    

    cout << pascalTriangle(5,3) << endl;
}
