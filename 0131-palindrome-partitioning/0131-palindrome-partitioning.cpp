class Solution {
public:
    bool isPalindrome(string s)
    {
        if(s.size()==1)return true;
        int i=0,j=s.size()-1;

        while(i<=j)
        {
            if(s[i]!=s[j])
              return false;
              
            i++;
            j--;
        }
        return true;
    }


    void subs(string s,vector<string>&t,int start,vector<vector<string>>&res)
    {
        if(start==s.size())
        {
            res.push_back(t);
        }

        for(int i=start;i<s.size();i++)
        {
            string part=s.substr(start,i-start+1);
            if(isPalindrome(part))
            {
                t.push_back(part);
                subs(s,t,i+1,res);
                t.pop_back();
            }

        }
    }
    vector<vector<string>> partition(string s) {
                vector<string>t;
                vector<vector<string>>res;
                subs(s,t,0,res);
                return res;

    }
};