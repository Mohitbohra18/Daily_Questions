class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    return dfs(grid, i, j, n, m);
                }
            }
        }
        return 0;
    }
    
    int dfs(vector<vector<int>>& adj, int i, int j,int n, int m) {
        int perimeter=0;

        if (i < 0 || j < 0 || i >= n || j >= m||adj[i][j]==0) return 1;

      
    

        if(adj[i][j] == -1) return 0;

    
        adj[i][j] = -1;

        perimeter+=dfs(adj, i - 1, j, n, m); // up
        perimeter+=dfs(adj, i + 1, j, n, m); // down
        perimeter+=dfs(adj, i, j - 1, n, m); // left
        perimeter+=dfs(adj, i, j + 1, n, m); // right

        return perimeter;
    }
};