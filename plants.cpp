#include <iostream>
#include <vector>

class Solution
{
public:
    long long minimumBuckets(int N, std::vector<int> &arr)
    {
        int maxWater = 1;
        int totalWater = 0;

        for (int i = 0; i < N; i++)
        {
            totalWater += arr[i];
            if (arr[i] > maxWater)
            {
                maxWater = arr[i];
            }
        }

        int left = maxWater;
        int right = totalWater;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            int buckets = 0;
            int currentWater = 0;

            for (int i = 0; i < N; i++)
            {
                if (currentWater + arr[i] > mid)
                {
                    buckets++;
                    currentWater = 0;
                }
                currentWater += arr[i];
            }

            if (buckets <= maxWater)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }
};

int main()
{
    int N = 4;
    std::vector<int> arr = {21, 14, 49, 35};

    Solution obj;
    long long result = obj.minimumBuckets(N, arr);

    std::cout << "Minimum number of buckets needed: " << result << std::endl;

    return 0;
}
