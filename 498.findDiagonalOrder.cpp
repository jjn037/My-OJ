//
// Created by jianan on 2021/10/11.
//

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> results;
        int m = mat[0].size();
        int n = mat.size();
        int ss = m + n;
        bool change = true;
        int loop = 0;
        int i = 0, j = 0;
        while(loop < ss){
            while(i <= loop || i <= n){
                results.push_back(mat[i][j]);
                i++, j--;
            }
            loop++;
            while(j <= loop || j <= m){
                results.push_back(mat[i][j]);
                j++, i--;
            }
            loop++;
        }
        return results;
    }
};