#include <iostream>
#include <vector>

/*
 * Given an array of integers nums and an integer target,
 * return indices of the two numbers such that they add up to target.
 * You may assume that each input would have exactly one solution,
 * and you may not use the same element twice.
 * You can return the answer in any order.
 * Source: https://leetcode.com/problems/two-sum/
 *
 * Follow-up: Can you come up with an algorithm that is less than O(n^2) time
 * complexity ?
 */

class TwoSum
{
public:
	// Brute force way would be to search for all possible pairs of numbers.
	std::vector<int> twoSum_rev01(std::vector<int>& nums, int target)
	{
		std::vector<int> v;
		for (int i = 1; i < nums.size(); ++i)
		{
			if (nums[i - 1] + nums[i] == target)
			{
				v.push_back(i - 1);
				v.push_back(i);
			}
		}

		return v;
	}

	// Fix one the numbers x, scan the entire array to find number y which is (target - x)
	std::vector<int> twoSum_rev02(std::vector<int>& nums, int target)
	{
	}

	// without changing the array, use hash map to speed up the search
	std::vector<int> twoSum_rev03(std::vector<int>& nums, int target)
	{
	}
};
