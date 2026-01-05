class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string res;
        
        for(int i=0;i<n;i++)
        {
            if(s[i]>=65&&s[i]<=90)
            {
                res.push_back(s[i]+32);
            }
            else if(s[i]>=97&&s[i]<=122)
            {
                res.push_back(s[i]);
            }
                
        }

        int l=0;
        int r=res.size()-1;

        while(l<r)
        {
            if(res[l]!=res[r])
            {
              return false;
            }
            l++;
            r--;
        }

    return true;

        
    }
};