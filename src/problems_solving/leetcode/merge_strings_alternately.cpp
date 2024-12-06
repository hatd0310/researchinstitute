#include <iostream>
#include <string>

using namespace std;
// https://leetcode.com/problems/merge-strings-alternately
/*
	- Description:
	You are given two strings word1 and word2.
	Merge the strings by adding letters in alternating order,
	starting with word1. If a string is longer than the other,
	append the additional letters onto the end of the merged string.

	Return the merged string.

	- Constraints:
	+ 1 <= word1.length, word2.length <= 100
	+ word1 and word2 consist of lowercase English letters.
*/
class Solution {
    public:
        string mergeAlternately_rev01(string word1, string word2);
        string mergeAlternately_rev02(string word1, string word2);

};


string Solution::mergeAlternately_rev01(string word1, string word2) {
	int size_of_word1 = word1.length();
    int size_of_word2 = word2.length();
    string merge_string;

    if (size_of_word1 >= size_of_word2) {
        for (int i = 0; i < size_of_word2;) {
            merge_string += word1[i];
            merge_string += word2[++i];
        }

        merge_string = word1.substr(size_of_word1 - size_of_word2, size_of_word1);
    } else {
        for (int i = 0; i < size_of_word1;) {
            merge_string += word2[i];
            merge_string += word1[i];
        }

        merge_string = word2.substr(size_of_word2 - size_of_word1, size_of_word2);	
    }
	
    return merge_string;
}

/*
	Hint: Use two pointers, one pointer for each string.
 	Alternately choose the character from each pointer, and move the pointer upwards.
*/
string Solution::mergeAlternately_rev02(string word1, string word2) {
	int i = 0;
    int j = 0;
    string merge_string;
    while (i < word1.length() || j < word2.length()) {
        if (i < word1.length()) {
            merge_string += word1[i++];
        }

        if (j < word2.length()) {
            merge_string += word2[j++];
        }

    }

    return merge_string;
	
}

int main() {
	
	Solution solution;
	cout << solution.mergeAlternately_rev01("abc", "pqr") << endl;
	cout << solution.mergeAlternately_rev02("abc", "pqr") << endl;

	
}
