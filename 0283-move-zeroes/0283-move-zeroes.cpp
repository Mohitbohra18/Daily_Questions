class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a=0;
        int b=0;
        
        for(b;b<nums.size();b++)
        {
            if(nums[b]==0&&nums[a]!=0)
            {
                a=b;
            }
            else if(nums[b]!=0)
            {
                swap(nums[b],nums[a]);
                a++;
            }

        }
       
        
    }
};