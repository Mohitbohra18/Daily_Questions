class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==0)return 0;
        if(nums.size()==1)return nums[0];

        int one=0;
        int two=0;
        for(int i=0;i<nums.size();i++)
        {
            one=(one^nums[i])&~two;
            two=(two^nums[i])&~one;
        }
        return one;
    }
};