class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
       set<int> s;
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int sz=s.size();
        int sn=nums.size();

        return sn!=sz ;
        
    }
};