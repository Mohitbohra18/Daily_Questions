class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>> mp;
     vector<vector<string>> res;

     for(string str:strs)
     {
        string s=str;
        sort(s.begin(),s.end());
        mp[s].push_back(str);
    }

    for(auto m:mp)
    {
        res.push_back(m.second);
    }
     return res;
    }
};