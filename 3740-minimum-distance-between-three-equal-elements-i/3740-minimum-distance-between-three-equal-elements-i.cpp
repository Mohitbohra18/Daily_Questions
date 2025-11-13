#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            mp[nums[i]].push_back(i);
        }

        const int INF = INT_MAX;
        int best = INF;
        
        for (auto &p : mp) {
            vector<int> &idx = p.second;
            if ((int)idx.size() < 3) continue;

            // slide window of size 3 over idx
            for (size_t i = 0; i + 2 < idx.size(); ++i) {
                int a = idx[i];
                int c = idx[i+2];
                // sum of pairwise distances for a <= b <= c equals 2*(c - a)
                long long sumPairwise = 2LL * (c - a);
                if (sumPairwise < best) best = (int)sumPairwise;
            }
        }

        return (best == INF) ? -1 : best;
    }
};
