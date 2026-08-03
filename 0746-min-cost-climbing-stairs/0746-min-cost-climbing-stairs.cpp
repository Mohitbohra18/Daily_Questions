class Solution {
public:
    int solve(vector<int>& cost, int i,vector<int> &dp)
    {
        if(i>=cost.size())return 0;

        if(dp[i]!=-1)return dp[i];



        int one=cost[i] + solve(cost,i+2,dp);
        int zero=cost[i]+ solve(cost,i+1,dp);

        return dp[i]=min(one,zero);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n,-1);
        return min(solve(cost,1,dp),solve(cost,0,dp));
    }
};