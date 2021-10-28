class Solution {
public:


    void backtrack(vector<vector<int>>& results, vector<int>& tmp, vector<int>& nums, vector<bool>& used){
        if(tmp.size() == nums.size()){
            results.push_back(tmp);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(used[i]) continue;
            used[i] = true;
            tmp.push_back(nums[i]);
            backtrack(results, tmp, nums, used);
            tmp.pop_back();
            used[i] = false;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> results;
        vector<int> tmp;
        vector<bool> used(nums.size(), false);
        backtrack(results, tmp, nums, used);
        return results;
    }
};