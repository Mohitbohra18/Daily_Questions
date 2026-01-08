class Solution {
public:
    int lcs(vector<int>& x, vector<int>& y, int n, int m, vector<vector<int>>& dp) {
        if (n == 0 || m == 0) 
            return INT_MIN;   // important

        if (dp[n][m] != -1) 
            return dp[n][m];

        int take = x[n-1] * y[m-1];
        int extend = lcs(x, y, n-1, m-1, dp);
        if (extend != INT_MIN)
            take = max(take, take + extend);

        int skip1 = lcs(x, y, n-1, m, dp);
        int skip2 = lcs(x, y, n, m-1, dp);

        return dp[n][m] = max({take, skip1, skip2});
    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
        return lcs(nums1, nums2, n, m, dp);
    }
};
