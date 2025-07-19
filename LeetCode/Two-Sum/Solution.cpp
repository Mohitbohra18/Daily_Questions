class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int copl=target-nums[i];
            if(mp.count(copl)!=0)
            {
                return {mp[copl],i};
            }
            mp[nums[i]]=i;

        }
        return {};
       
    }
};