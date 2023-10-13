#include <iostream>

int reverse(int x)
{
    int revNo = 0, num = (-1) * x;
    while (num != 0)
    {
        int lastdigit = num % 10;
        num = num / 10;
        revNo = (revNo * 10) + lastdigit;
    }
    return ((-1) * revNo);
}

int main()
{
    int x;
    std::cin >> x;
    std::cout << reverse(x);
    return 0;
}
