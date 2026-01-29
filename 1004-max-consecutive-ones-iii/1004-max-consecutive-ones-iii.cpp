class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int low=0,high=0;
        int mx=0;
        int ones=0;
        int zero=0;

        // while(high<n)
        // {
        //     if(nums[high]==1)ones++;      
            
        //     int len=high-low+1;
            
        //     while(len-ones>k)
        //     {
        //         if(nums[low]==1)ones--;  
        //         low++;
        //         len=high-low+1;             
        //     }

        //     mx=max(mx,len);
        //     high++;
        // }
        while(high<n)
        {
            if(nums[high]==0)zero++;      
            
            
            
            while(zero>k)
            {
                if(nums[low]==0)zero--;  
                low++;            
            }
            int len=high-low+1;

            mx=max(mx,len);
            high++;
        }
        return mx;
    }
};