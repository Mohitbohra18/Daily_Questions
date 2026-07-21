class Solution {
    public:
    vector<string> generateParenthesis(int n) {
        string s="";
        vector<string> res;
        validParanthesis(0,0,s,n,res);
        return res;
    }
private:
    void validParanthesis(int open,int close,string s,int n,vector<string> &res)
    {
        if(open==n&&close+open==n*2)
          {res.push_back(s);
          return ;}
        
        if(open<n)
       { 
        validParanthesis(open+1,close,s+"(",n,res);
       }
       
       if(close<open)
       {
        validParanthesis(open,close+1,s+")",n,res);
       }
    }

};