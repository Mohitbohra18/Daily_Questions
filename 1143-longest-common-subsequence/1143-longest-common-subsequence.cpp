class Solution {
public:
      int lcsRec(string &s1,string &s2,int n,int m,vector<vector<int>> &dp)
    {
      if(n==0||m==0)// Base condition
      return 0;
      
      if(dp[n][m]!=-1)
      {
          return dp[n][m];
      }
      
      // Choice diagram based condn
      
      if(s1[n-1]==s2[m-1])
      {
          return dp[n][m]= 1+lcsRec(s1,s2,n-1,m-1,dp);
      }
      else
      {
          return dp[n][m]= max(lcsRec(s1,s2,n,m-1,dp),lcsRec(s1,s2,n-1,m,dp));
      }
      
    }
    int longestCommonSubsequence(string s1, string s2) {
         int n=s1.size();
        int m=s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1)); // memoization 
        
        return lcsRec(s1,s2,n,m,dp);
    }
};