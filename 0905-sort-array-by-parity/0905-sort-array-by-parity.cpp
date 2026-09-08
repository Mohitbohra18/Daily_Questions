class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int even = 0;
        int odd = nums.size() - 1;

        while(even < odd)
        {
            if(nums[even] % 2 == 0)
            {
                even++;
            }
            else
            {
                swap(nums[even], nums[odd]);
                odd--;
            }
        }

        return nums;
    }
};