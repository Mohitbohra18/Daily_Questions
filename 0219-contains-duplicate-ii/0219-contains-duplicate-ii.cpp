class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int res=0;
        if(nums.size()<=1)return false;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])!=mp.end())
            {
                res=abs(i-mp[nums[i]]);
                 if(res<=k)
        {
            return true;
        }
            }

            mp[nums[i]]=i;
        }

       
        return false;
    }
};

