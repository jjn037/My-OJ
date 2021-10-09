class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unorder_set<int> uset;
        for(auto num: nums) uset.insert(num);
        int maxLength = 0;
        int curLength = 0;
        for(auto num: uset){
            if(!uset.count(num-1)){
                int start = num;
                while(uset.count(++num));
                maxLength = max(maxLength, num - start);
            }
        }
        return maxLength;
    }
};