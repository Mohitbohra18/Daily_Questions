class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int curmin=0;
        int curmax=0;
        int mx=0;
        int mn=0;
        for(int x:nums)
        {
            curmax=max(x,curmax+x);
            curmin=min(x,curmin+x);

            mx=max(curmax,mx);
            mn=min(curmin,mn);
        }
       
        return  max(mx,abs(mn));
        
    }
};