//
// Created by jianan on 2021/10/18.
//

class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& results, vector<int>& tmp, int sum, int start) {
        if (sum == target) {
            results.push_back(tmp);
            return;
        }
        for (int i = start; i < candidates.size() &&  sum + candidates[i] <= target; i++) {
            tmp.push_back(candidates[i]);
            sum += candidates[i];
            backtrack(candidates, target, results, tmp, sum , i);
            tmp.pop_back();
            sum = sum - candidates[i];
        }
    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> results;
        vector<int> tmp;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, results, tmp, 0, 0);
        return results;
    }
};