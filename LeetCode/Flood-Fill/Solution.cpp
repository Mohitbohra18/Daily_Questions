class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int val = image[sr][sc];
        int n = image.size();
        int m = image[0].size();
        
        if (val != newColor)
            dfs(image, sr, sc, val, newColor, n, m);
        
        return image;
    }

    void dfs(vector<vector<int>>& adj, int i, int j, int val, int color, int n, int m) {
        // Check bounds
        if (i < 0 || j < 0 || i >= n || j >= m) return;

        // Check if the current cell is of the original color
        if (adj[i][j] != val) return;

        // Recolor the current cell
        adj[i][j] = color;

        // Recursively fill in all 4 directions
        dfs(adj, i - 1, j, val, color, n, m); // up
        dfs(adj, i + 1, j, val, color, n, m); // down
        dfs(adj, i, j - 1, val, color, n, m); // left
        dfs(adj, i, j + 1, val, color, n, m); // right
    }
};
