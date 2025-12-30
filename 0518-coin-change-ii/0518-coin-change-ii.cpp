class Solution {
public:
    int change(int amount, vector<int>& coins) {
         int n=coins.size();
         const long long Mod=10000000007;
        
        vector<vector<long long >> dp(n+1,vector<long long>(amount+1,0));
        // initialisation
        for(int i=0;i<=n;i++)
            dp[i][0]=1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=amount;j++)
            {
                if(coins[i-1]<=j)
                {
                    dp[i][j]=(dp[i-1][j] +  dp[i][j-coins[i-1]])%Mod;
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return int(dp[n][amount]);
      
    }
};