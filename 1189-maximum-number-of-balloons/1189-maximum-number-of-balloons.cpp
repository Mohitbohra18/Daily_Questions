class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        int res=INT_MAX;
        for(char s:text)
        {
           mp[s]++;
        }
        res=min(res,mp['b']);
        res=min(res,mp['a']);
        res=min(res,mp['l']/2);
        res=min(res,mp['o']/2);
        res=min(res,mp['n']);


        return res;       
    }
};