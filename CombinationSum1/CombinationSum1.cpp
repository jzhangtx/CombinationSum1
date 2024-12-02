// CombinationSum1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

void GetCombinations(const std::vector<int>& vec, int target, size_t index, std::vector<int>& v, std::vector<std::vector<int>>& result)
{
    if (target == 0)
    {
        result.push_back(v);
        return;
    }

    if (index == vec.size() || target < 0)
        return;

    // re-using the current element
    v.push_back(vec[index]);
    GetCombinations(vec, target - vec[index], index, v, result);
    v.pop_back();

    // use all the elements after the current one
    for (size_t i = index + 1; i < vec.size(); ++i)
    {
        v.push_back(vec[i]);
        GetCombinations(vec, target - vec[i], i, v, result);
        v.pop_back();
    }
}

std::vector<std::vector<int>> CombinationSum(std::vector<int>& A, int val)
{
    std::vector<std::vector<int>> result;
    std::vector<int> v;
    GetCombinations(A, val, 0, v, result);

    return result;
}

int main()
{
    while (true)
    {
        std::cout << "Number of elements in array: ";
        int count = 0;
        std::cin >> count;
        if (count == 0)
            break;

        std::cout << "Numbers in array: ";
        std::vector<int> vec(count, 0);
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        std::cout << "The sum: ";
        int sum;
        std::cin >> sum;

        std::vector<std::vector<int>> r = CombinationSum(vec, sum);
        for (auto& vv : r)
        {
            if (!vv.empty())
                std::cout << vv[0];
            for (auto i = vv.begin() + 1; i != vv.end(); ++i)
                std::cout << ", " << *i;
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}
