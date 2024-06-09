/*
 * @lc app=leetcode id=974 lang=cpp
 *
 * [974] Subarray Sums Divisible by K
 */

// @lc code=start
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int,int>mp;
        mp[0]++;
        int ans = 0, sum =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int modd=sum%k;        
        
            if(modd<0)             
            {
                modd+=k;
            }
       
        
            if(mp[modd]>0){
                ans+=mp[modd]; 
            }          
                   

            mp[modd]++;              
        }

        return ans;
    }
};
// @lc code=end

