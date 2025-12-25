class Solution {
public:
    // int f(int n,vector<int> &dp)
    // {
    //  if(n<=1)return n;//the lowest possible value of the recursion parameter is the base case

    //  if(dp[n]!=-1)return dp[n];

    //  return dp[n]=  f(n-1,dp)+f(n-2,dp);
    // }


    int fib(int n) {
        if(n<=1)
        return n;

        // vector<int> dp(n+1,-1);//recursion and memoization appraoch
        // return f(n,dp);

        vector<int> dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];//bottom up approach 
    }
};