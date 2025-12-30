class Solution {
public:
    int isSubsetSumCount(int n,vector<int>& nums,int sum)
    {
        vector<vector<int>> dp(n+1,vector<int>(sum+1));
        //initialisation
        for(int i=0;i<=n;i++)
        dp[i][0]=1;

        for(int j=1;j<=sum;j++)
        dp[0][j]=0;

        //logic
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
               if(nums[i-1]<=j)
               {
                dp[i][j]=dp[i-1][j] + dp[i-1][j-nums[i-1]];
               }
               else
               {
                dp[i][j]=dp[i-1][j];
               }
            }
        }
        return dp[n][sum];

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);

        if(abs(target)>sum) return 0;
        if((target+sum)%2!=0)return 0;
        
        int s1=(target+sum)/2;
        return isSubsetSumCount(n,nums,s1);
        
    }
};