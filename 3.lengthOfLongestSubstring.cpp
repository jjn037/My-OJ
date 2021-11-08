//
// Created by jianan on 2021/10/22.
//

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() < 2) return s.length();
        int max_length = 0;
        int cur_max = 0;
        int left = 0;
        unordered_map<char, int> um;

        for(int i = 0; i < s.length(); i++){
            if(um.count(s[i]) == 0 || left > um[s[i]]){

                cur_max = i - left + 1;
            }
            else{
                left = um[s[i]] + 1;
            }
            um[s[i]] = i;
            max_length = max(max_length,  cur_max);
        }
        return max_length;
    }
};