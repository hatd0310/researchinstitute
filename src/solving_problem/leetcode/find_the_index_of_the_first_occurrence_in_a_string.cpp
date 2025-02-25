#include <iostream>
#include <string>

using namespace std;
// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string
/*
	- Description:
	Given two strings needle and haystack,
	return the index of the first occurrence of needle in haystack,
	or -1 if needle is not part of haystack.

	- Constraints:
	+ 1 <= haystack.length, needle.length <= 10^4
	+ haystack and needle consist of only lowercase English characters.
*/
class Solution
{
public:
	int strStr_rev01(string haystack, string needle);

	// https://www.geeksforgeeks.org/kmp-algorithm-for-pattern-searching/
	int strStr_rev02(string haystack, string needle);
};

int Solution::strStr_rev01(string haystack, string needle)
{
	return haystack.find(needle);
}

int Solution::strStr_rev02(string haystack, string needle)
{
}

int main()
{
	Solution solution;
	string haystack = "We think in generalities, but we live in details."; // (quoting Alfred N. Whitehead)
	string needle = "in";
	size_t pos = str.find(needle);

	solution.strStr_rev01(haystack, needle);

	return 0;
}
