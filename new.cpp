#include <iostream>
#include <vector>
#include <unordered_map>

int solve(int N, std::vector<std::pair<int, int>> &A, int K)
{
    int count = 0;
    std::unordered_map<int, int> distanceCount;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            int distance = (A[i].first ^ A[j].first) + (A[i].second ^ A[j].second);
            distanceCount[distance]++;
        }
    }

    count = distanceCount[K];
    return count;
}

int main()
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int N;
        std::cin >> N;

        std::vector<std::pair<int, int>> A(N);
        for (int i = 0; i < N; i++)
        {
            std::cin >> A[i].first >> A[i].second;
        }

        int p;
        std::cin >> p;

        int result = solve(N, A, p);
        std::cout << result << std::endl;
    }

    return 0;
}
