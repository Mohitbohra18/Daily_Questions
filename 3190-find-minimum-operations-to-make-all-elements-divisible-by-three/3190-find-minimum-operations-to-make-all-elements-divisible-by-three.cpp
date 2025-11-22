class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%3<(3-nums[i]%3))
            {
                count+=nums[i]%3;
            }
            else
            {
                count+=3-nums[i]%3;
            }
        }
        return count;
    }
};