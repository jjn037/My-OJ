//
// Created by jianan on 2021/10/20.
//

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() - 1, n = matrix[0].size() - 1;
        int search_m = 0;
        while(n >= 0 && search_m <= m ){
            if(matrix[search_m][n] == target)
                return true;
            if(matrix[search_m][n] > target){
                n--;
            }
            else if(matrix[search_m][n] < target)
                search_m++;

        }
        return false;
    }

};