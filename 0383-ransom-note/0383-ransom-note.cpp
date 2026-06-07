class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(int i=0;i<ransomNote.size();i++)
        {
            mp[ransomNote[i]]++;
        }
        for(auto c:magazine)
        {
           if(mp.count(c)!=0)
           {
             mp[c]--;
            if(mp[c]==0)
            {
                mp.erase(c);
            }
           }

        }
        if(mp.size()>=1)return false;

        return true;
    }
};