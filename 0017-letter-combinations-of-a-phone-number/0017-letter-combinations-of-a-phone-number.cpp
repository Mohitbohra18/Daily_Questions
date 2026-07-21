class Solution {
 unordered_map<char, string> mp = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};


    void combination(string digits,int idx,string &temp,vector<string>&res)
    {
        if(idx==digits.size())
        {
            res.push_back(temp);
            return;
        }

        string letters= mp[digits[idx]];
        for(char c:letters)
        {   
            temp.push_back(c);
            combination(digits,idx+1,temp,res);
            temp.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)return {};
        vector<string> res;
        string temp="";
        combination(digits,0,temp,res);
        return res;
    }
};