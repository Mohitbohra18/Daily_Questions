class Solution {
public:
    string removeDuplicates(string s) {
        // stack<char> st;
        // st.push(s[0]);
        // string str;
        

        // for(int i=1;i<s.size();i++)
        // {
           
        //    if(!st.empty()&&(st.top()==s[i]) )
        //    {
        //     st.pop();
        //    }
        //    else
        //    {
        //     st.push(s[i]);
        //    }
        // }
        
        // int ind=0;
        // while(!st.empty())
        // {
        //     str.push_back(st.top());
        //     st.pop();
        //     ind++;          
        // }
        // reverse(str.begin(),str.end());
        // return str;

        //METHOD 2

        string res="";

        for(int i=0;i<s.size();i++)
        {
            if(!res.empty()&&res.back()==s[i])
            {
                res.pop_back();

            }
            else
            {
                res.push_back(s[i]);
            }
        }
        return res;
    }
};

