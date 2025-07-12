class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<int> mp(26,0);
        if(n!=m)
        {
            return false;
        }

        for(int i=0;i<n;i++)
        {
            mp[s[i]-'a']++;
        }
        for(int i=0;i<m;i++)
        {
            mp[t[i]-'a']--;
            if(mp[t[i]-'a']<0)
            {
                return false;
            }
                       
        }
        return true;
        
    }
};