class Solution {
public:
    bool isSubsetSum(int n,vector<int>& arr,int sum)
    {
        vector<vector<bool>> dp(n+1,vector<bool>(sum+1));
        
        //Initialization 
        
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=true;
        }
        for(int j=1;j<=sum;j++)
        {
            dp[0][j]=false;
        }
        
        
        // Filling Values
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]= dp[i-1][j-arr[i-1]]|| dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& arr) {
            int sum = accumulate(arr.begin(),arr.end(),0);
        
        if(sum%2!=0)
        {
            return false;
        }
        
       return isSubsetSum(arr.size(),arr, sum/2);
        
    }
};