class Solution {
public:
    vector<int> toposort( vector<vector<int>> &adj,int V,vector<int> &indegree)
    {
     vector<int> result;

     queue<int> q;

     for(int i=0;i<V;i++)
     {
        if(indegree[i]==0)
        {
            q.push(i);
        }
     }

     while(!q.empty())
     {
        int cur=q.front();
        q.pop();
        result.push_back(cur);

        for(int &nbr:adj[cur])
        {
            indegree[nbr]--;
            if(indegree[nbr]==0)
            {
                q.push(nbr);
            }
        }
     }
     return result;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> indegree(numCourses);
        
        for(auto &edge:prerequisites)
        {
            int a=edge[0];
            int b=edge[1];

            adj[b].push_back(a);

            indegree[a]++;
        }


        return toposort(adj,numCourses,indegree);
    }
};