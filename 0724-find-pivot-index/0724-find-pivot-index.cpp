class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int idx=-1;
        vector<int> prefix(nums.size(),0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }

        if(prefix[n-1]-prefix[0]==0)idx=0;

        for(int i=1;i<n;i++)
        {
            if(prefix[i-1]==prefix[n-1]-prefix[i])
            {
               idx=i;
            }
        }
    return idx;
    }
};