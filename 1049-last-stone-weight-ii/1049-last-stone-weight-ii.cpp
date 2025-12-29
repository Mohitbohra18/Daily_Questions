class Solution {
public:
     bool isSubset(int n, int sum,vector<int>& arr ,vector<vector<bool>>& dp)
    {
        
        
        //initialisation
        for(int i=0;i<=n;i++)
        dp[i][0]=true;
        
        for(int j=1;j<=sum;j++)
        dp[0][j]=false;
        
        //logic
        for(int i=1;i<=n;i++)
        {
            
        for(int j=1;j<=sum;j++)
        {
            if(arr[i-1]<=j)
            {
                dp[i][j]=dp[i-1][j]  || dp[i-1][j-arr[i-1]];
            }
            else
            {
                dp[i][j]=dp[i-1][j] ;
            }
            
        }
        }
        return dp[n][sum];
        
    }
    int lastStoneWeightII(vector<int>& stones) {
        int n=stones.size();
        int minn=INT_MAX;
        
        // Your code goes here
        int sum=accumulate(stones.begin(),stones.end(),0);
        vector<vector<bool>> dp(n+1,vector<bool>(sum+1));
        isSubset(n,sum,stones,dp);
        
        for(int i=0;i<=sum/2;i++)
        {
            if(dp[n][i])
            {
                minn=min(minn,sum- 2*i);
            }
        }
        return minn;
    }
};