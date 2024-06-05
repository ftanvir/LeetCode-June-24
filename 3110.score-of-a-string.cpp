/*
 * @lc app=leetcode id=3110 lang=cpp
 *
 * [3110] Score of a String
 */

// @lc code=start
class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;
        int n = s.size();

        for(int i=0; i<n-1; i++) {
            int num1 = int(s[i]);
            int num2 = int(s[i+1]);
            int diff = abs(num1-num2);
            score+=diff;
        }

        return score;
    }
};
// @lc code=end

