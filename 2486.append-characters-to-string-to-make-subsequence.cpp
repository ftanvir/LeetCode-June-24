/*
 * @lc app=leetcode id=2486 lang=cpp
 *
 * [2486] Append Characters to String to Make Subsequence
 */

// @lc code=start
class Solution {
public:
    int appendCharacters(string s, string t) {
        int sIndex = 0, tIndex = 0;
        int sLength = s.length(), tLength = t.length();
        
        while (sIndex < sLength && tIndex < tLength) {
            if (s.at(sIndex) == t.at(tIndex)) {
                tIndex++;
            }
            sIndex++;
        }
        
        return tLength - tIndex;
    }
};
// @lc code=end

