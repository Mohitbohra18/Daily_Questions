class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
        int currmx=0;
        int currmn=0;
        int maxsum=INT_MIN;
        int minsum=INT_MAX;
        int total=0;
        int i=0;


        while(i<n)
        {
            currmx=max(nums[i],currmx+nums[i]);
            currmn=min(nums[i],currmn+nums[i]);

            maxsum=max(maxsum,currmx);            
            minsum=min(minsum,currmn); 
            total+=nums[i];
            i++;           
        }

        if(maxsum<0)
        return maxsum;


        
        return max(maxsum,total-minsum);

        
        
    }
    
};