#include <iostream>

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

class TwoSum {
public:
	std::vector<int> twoSum_rev01(std::vector<int>& nums, int target) {
		int sizeNums = nums.size();

		int i, j;

		for (i = 0; i < sizeNums + 1; ++i) {
			if (nums[i] + nums[++i] == target) {
				std:cout << "Found this" << "\n";
			}
		}

		return 0;
	}

};
