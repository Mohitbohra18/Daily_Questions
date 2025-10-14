class Solution {
public:
    bool dfs(vector<vector<int>>& adj,int curr, vector<int>& color,int currColor)
    {
        color[curr]=currColor;

        for( int &v:adj[curr])
        {
            if(color[v]==color[curr])
            {
                return false;
            }
            if(color[v]==-1)
            {
              int colorv=1-currColor;
              if(!dfs(adj,v,color,colorv))
                {
                    return false;
                }
            }
        }
        return true;
        
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
         vector<int> color(n,-1);
         for(int i=0;i<n;i++)
         {
            if(color[i]==-1)
            {
                if(!dfs(graph,i,color,0))
                {
                    return false;
                }
            }
         }
         return true;
    }
};