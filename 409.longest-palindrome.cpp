/*
 * @lc app=leetcode id=409 lang=cpp
 *
 * [409] Longest Palindrome
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        unordered_map<char, int>mp;

        for(int i=0; i<n; i++) {
            mp[s[i]]++;
        }

        bool flag = false;
        int ans =0;
        for(auto it:mp) {
            if(!(it.second&1)) ans+=it.second;
            else {
                flag = true;
                ans+=(it.second-1);
            }
        }

        if(flag) ans+=1;

        return ans;
    }
};
// @lc code=end

