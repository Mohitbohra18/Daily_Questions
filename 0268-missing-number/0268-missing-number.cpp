class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        // int x=0;
        // for(int i=0;i<=n;i++)
        // {
        //     x^=i;
        // }

        // for(int num:nums)
        // {
        //     x^=num;
        // }
        // return x;

        //cyclic sort

    

        int i=0;
        while(i<n)
        {
            if(nums[i]<n&&nums[i]!=nums[nums[i]])
            {
                swap(nums[i],nums[nums[i]]);
            }
            else
            {
                i++;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(i!=nums[i])return i;

        }

        return n;
        
    }
};