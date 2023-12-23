#include <iostream>
#include <vector>

bool containsDuplicate(const std::vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] == nums[i])
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    std::vector<int> user_input;
    int num;

    std::cout << "Enter integers (enter a non-integer):" << std::endl;
    while (std::cin >> num)
    {
        user_input.push_back(num);
    }

    bool hasDuplicate = containsDuplicate(user_input);

    if (hasDuplicate)
    {
        std::cout << "The array contains duplicate elements." << std::endl;
    }
    else
    {
        std::cout << "No duplicates found in the array." << std::endl;
    }

    return 0;
}
