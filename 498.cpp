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
        for(int s = 0; s <= ss; s++){
            int i = 0, j = s;
            while(0 <= i < m && 0 <= j < n ){
                results.push_back(mat[i][j]);
                i++;
                j--;
            }
        }
        return results;
    }
};