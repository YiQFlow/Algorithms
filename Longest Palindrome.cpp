/*
Given a string which consists of lowercase or uppercase letters, find the length of the longest palindromes that can be built with those letters.

This is case sensitive, for example "Aa" is not considered a palindrome here.

Note:
Assume the length of given string will not exceed 1,010.

Example:

Input:
"abccccdd"

Output:
7

Explanation:
One longest palindrome that can be built is "dccaccd", whose length is 7.
*/
class Solution {
public:
	int longestPalindrome(string s) {
		unordered_map<char, int> dict;
		for (auto &val : s) {
			dict[val]++;
		}
		int ans = 0;
		for (auto &val : dict) {
			ans += ((val.second / 2) * 2);
		}
		return ans == s.size() ? ans : ans + 1;
	}
};
