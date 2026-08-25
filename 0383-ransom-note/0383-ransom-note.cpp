class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(char r:ransomNote)
        {
            mp[r]++;
        }
        for(char mg:magazine)
        {
              if(mp.find(mg)!=mp.end())
              {
                mp[mg]--;
                if(mp[mg]==0)
                {
                    mp.erase(mg);
                }
              }

        }
        if(mp.size()==0)return true;

        return false;

    }
};