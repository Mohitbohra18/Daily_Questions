
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        int count = 0;
        int rows = grid.size(), cols = grid[0].size();

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    ++count;
                }
            }
        }
        return count;
    }
    
private:
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int rows = grid.size(), cols = grid[0].size();
        if (i < 0 || j < 0 || i >= rows || j >= cols || grid[i][j] != '1')
            return;

        grid[i][j] = '#';
        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
    }
};
