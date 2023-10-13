#include <iostream>
#include <vector>
#include <cmath>

int find_x(int N, int Q, std::vector<int> &query)
{
    int diagonal = 1;
    int start = 1;

    while (start <= N * N)
    {
        int end = start + N - diagonal;
        if (query[0] >= start && query[0] <= end)
        {
            for (int i = 0; i < Q; i++)
            {
                std::cout << diagonal << std::endl;
            }
            return 0;
        }
        diagonal++;
        start = end + 1;
    }
    return -1;
}

int main()
{
    int N, Q;
    std::cin >> N;
    std::cin >> Q;

    std::vector<int> query(Q);
    for (int i = 0; i < Q; i++)
    {
        std::cin >> query[i];
    }

    find_x(N, Q, query);

    return 0;
}
