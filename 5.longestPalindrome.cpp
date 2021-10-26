//
// Created by jianan on 2021/10/15.
//

class Solution {
public:
    string longestPalindrome(string s) {
        vector<vector<int>> dp(s.size(), (s.size(), 1));
        for(int i = 1; i < s.size(); i++){
            for(int j = 0; j < i; j++){
                if(s[i] == s[j])
                    dp[i][j] = dp[i - 1][j + 1]  + 2;
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j+1]);
            }
        }
    }
};