class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size() + 1; 
        vector<vector<int>> adj(n + 1);
        
        
        for (auto &e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        vector<int> visited(n + 1, 0);
        vector<int> connections(n + 1, 0);

        
        dfs(1, visited, adj, connections);

        
        int center = 1;
        for (int i = 2; i <= n; i++) {
            if (connections[i] > connections[center]) {
                center = i;
            }
        }

        return center;
    }

    void dfs(int s, vector<int> &visited, vector<vector<int>>& adj, vector<int>& connections) {
        visited[s] = 1;

        for (int nbr : adj[s]) {
            connections[s]++;   
            if (!visited[nbr]) {
                dfs(nbr, visited, adj, connections);
            }
        }
    }
};
