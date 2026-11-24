class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> res;
        stack<char> r;
        for(char ch:s)
        {
            if(!res.empty()&& res.top()==ch)
            {
                res.pop();
            }
            else
            {
                res.push(ch);
            }
        }
        string result;
        while(!res.empty())
        {
            r.push(res.top());
            res.pop();
        }
         while(!r.empty())
        {
            result+=r.top();
            r.pop();
        }
        return result;
    }
};