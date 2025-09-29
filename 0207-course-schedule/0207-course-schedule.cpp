class Solution {
public:
    bool dfsCycle(vector<vector<int>>& adj, int s, vector<bool>& vis, vector<bool>& inRec) {
        vis[s] = true;
        inRec[s] = true;

        for (int &v : adj[s]) {
            if (!vis[v] && dfsCycle(adj, v, vis, inRec)) {
                return true; // cycle found
            } else if (inRec[v]) {
                return true; // back edge found → cycle
            }
        }

        inRec[s] = false; // backtrack
        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        // Step 1: Build adjacency list
        vector<vector<int>> adj(numCourses);
        for (auto &edge : prerequisites) {
            int u = edge[0];
            int v = edge[1];
            adj[v].push_back(u);
        }

        // Step 2: Cycle detection using DFS
        vector<bool> vis(numCourses, false);
        vector<bool> inRec(numCourses, false);

        for (int i = 0; i < numCourses; i++) {
            if (!vis[i]) {
                if (dfsCycle(adj, i, vis, inRec)) {
                    return false; // cycle → cannot finish
                }
            }
        }

        return true; // no cycle → possible to finish
    }
};
