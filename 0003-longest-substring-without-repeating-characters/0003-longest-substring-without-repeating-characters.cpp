class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // LCS APPROACH
        // int n = s.length();
        // int maxLength = 0;
        // unordered_set<char> charSet;
        // int left = 0;
        
        // for (int right = 0; right < n; right++) {
        //     if (charSet.count(s[right]) == 0) {
        //         charSet.insert(s[right]);
        //         maxLength = max(maxLength, right - left + 1);
        //     } else {
        //         while (charSet.count(s[right])) {
        //             charSet.erase(s[left]);
        //             left++;
        //         }
        //         charSet.insert(s[right]);
        //     }
        // }
        
        // return maxLength;


        // SLIDING WINDOW APPROACH
        
        int n=s.size();
        int low=0;
        int high=0;
        int mx=0;
        unordered_map<char,int> m;

        while(high<n)
        {
            m[s[high]]++;
            while( m[s[high]]>1)
            {
                m[s[low]]--;
                if(m[s[low]]==0)
                {
                    m.erase(s[low]);
                }
                low++;
            }
            int len=m.size();
            mx=max(mx,len);
            high++;
        }
        return mx;
        
    }
};