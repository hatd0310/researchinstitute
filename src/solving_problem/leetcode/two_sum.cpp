#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/two-sum/
/*
	- Description:
	Given an array of integers nums and an integer target,
	return indices of the two numbers such that they add up to target.
	You may assume that each input would have exactly one solution,
	and you may not use the same element twice.
	You can return the answer in any order.
	
	- Constraints:
	2 <= nums.length <= 104
	-109 <= nums[i] <= 109
	-109 <= target <= 109
	Only one valid answer exists.

	Follow-up: Can you come up with an algorithm that is less than O(n^2) time
	complexity ?
 */

class TwoSum
{
public:
	vector<int> twoSum_rev01(vector<int>& nums, int target)
	{
		vector<int> v;
		int size = nums.size();
		for (int i = 1; i < size; ++i)
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
	vector<int> twoSum_rev02(vector<int>& nums, int target)
	{
	}

};
