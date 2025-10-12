
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        int count = 0;
        int rows = grid.size(), cols = grid[0].size();
        
        vector<vector<int>> vis(rows,vector<int>(cols,0));

        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (!vis[i][j]&&grid[i][j] == '1') {
                   
                    ++count;
                    queue<pair<int,int>> q;
                    q.push({i,j});

                    vis[i][j]=1;
                    while(!q.empty())
                    {
                        auto [x,y]=q.front();
                        q.pop();

                        for(int dir=0;dir<4;dir++)
                        {
                            int nx=x+dx[dir]; 
                            int ny=y+dy[dir];

                            if(nx>=0&&ny>=0&&nx<rows&&ny<cols&&!vis[nx][ny]&&grid[nx][ny]=='1')
                            {
                                vis[nx][ny]=1;
                                q.push({nx,ny});
                            } 
                        }

                    }

                }
            }
        }
        return count;
    }
    
// private:
//     void dfs(vector<vector<char>>& grid, int i, int j) {
//         int rows = grid.size(), cols = grid[0].size();
//         if (i < 0 || j < 0 || i >= rows || j >= cols || grid[i][j] != '1')
//             return;

//         grid[i][j] = '#';
//         dfs(grid, i+1, j);
//         dfs(grid, i-1, j);
//         dfs(grid, i, j+1);
//         dfs(grid, i, j-1);
//     }
};
