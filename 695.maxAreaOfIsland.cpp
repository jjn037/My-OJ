//
// Created by jianan on 2021/10/20.
//

class Solution {
public:
    bool inArea(vector<vector<int>>& grid, int i, int j){
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
            return false;
        return true
    }

    int dfs(vector<vector<int>>& grid, int i, int j){
        if(!inArea(grid, i, j)) return 0;
        if(grid[i][j] != 1) return 0;
        grid[i][j] = 2;

        return grid[i-1][j] + grid[i+1][j] + grid[i][j-1] + grid[i][j+1] + 1;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int results = 0;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 1)
                    results = max(dfs(grid, i, j), results);
            }
        }
        return results;
    }
};