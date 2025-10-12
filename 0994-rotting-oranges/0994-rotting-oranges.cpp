class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if (grid.empty()) return 0;
        int count = 0;
        int rows = grid.size(), cols = grid[0].size();
        int time =0;
        int fresh=0;

        queue<pair<pair<int,int>,int>> q;  
        vector<vector<int>> vis(rows,vector<int>(cols,0));

          for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if(!vis[i][j]&&grid[i][j] == 2)
                {
                   vis[i][j]=1;
                   q.push({{i,j},0});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        

        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        int rotcount=0;
     
                    while(!q.empty())
                    {
                       auto it=q.front();
                        q.pop();
                        int x=it.first.first;
                        int y=it.first.second;
                        int t=it.second;

                         time=max(time,t);


                        for(int dir=0;dir<4;dir++)
                        {
                            int nx=x+dx[dir]; 
                            int ny=y+dy[dir];

                            if(nx>=0&&ny>=0&&nx<rows&&ny<cols&&grid[nx][ny]==1)
                            {
                                vis[nx][ny]=1;
                                grid[nx][ny]=2;
                                q.push({{nx,ny},t+1});
                                rotcount++;

                            } 
                        }

                    }
                    if(rotcount!=fresh)
                    {
                        return -1;
                    }
        return time;
    }
};