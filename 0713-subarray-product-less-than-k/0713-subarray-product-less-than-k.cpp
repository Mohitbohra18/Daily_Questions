class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int n=nums.size();
        int i=0;
        int j=0;
        int c=0;
      
        long long prod=1;


        while(j<n)
        {
            prod=prod*nums[j];
            while(prod>=k&& i<=j)
            {
                prod= prod/nums[i];
                
                i++;
            }
            c+=j-i+1;
           j++;
        }
        return c;
    }
};