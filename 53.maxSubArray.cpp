//
// Created by jianan on 2021/10/12.
//
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int results = nums[0];
        int tmp_sum = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(tmp_sum + nums[i] >= 0){
                tmp_sum = tmp_sum + nums[i] ;
            }
            else{
                tmp_sum = nums[i];
            }
            results = max(tmp_sum, results);
        }
        return results;
    }
};
