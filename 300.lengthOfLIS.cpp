//
// Created by jianan on 2021/10/25.
//

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 1);
        int results = 0
        for(int i = 1; i < nums.size(); i++){
            for(int j = 0; j < i; j++){
                if(nums[i] > nums[j])
                    dp[i] = max(dp[i], dp[j] + 1);
            }
            results = max(results, dp[i]);
        }
        return dp[nums.size()-1];
    }
};