class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int i=0;
        vector<int> ans;

        while(i<nums.size())
        {
            int cur=nums[i]-1;
            if(nums[i]!=nums[cur])
            {
                swap(nums[i],nums[cur]);
            }
            else
            {
                i++;
            }
        }

        for(int j=0;j<nums.size();j++)
        {
             int cur=nums[j]-1;
            if((nums[j]==nums[cur])&&j!=cur)
            {
                ans.push_back(nums[j]);
            }
        }

        return ans;
    }
};