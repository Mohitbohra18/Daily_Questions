class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int low=0,high=0;
        int mx=0;
        
        vector<int> fq(26,0);

        while(high<n)
        {
            fq[s[high]-'A']++;
            int len=high-low+1;
            while(len-*max_element(fq.begin(),fq.end())>k)
            {
                fq[s[low]-'A']--;
                low++;
                len=high-low+1;
            }
            
            mx=max(mx,len);
            high++;
        }

        return mx;
    }
};