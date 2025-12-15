class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int x;
       vector<int> b(n,0);
       for(int i=1;i<n;i++)
       {
        if(nums[i-1]>nums[i])
        {
            x=i;
            break;
        }
       }
       for(int i=0;i<n;i++)
       {
         b[i]=nums[(i+x)%n];
       }
       for(int i=1;i<n;i++)
       {
         if(b[i-1]>b[i])
         {
            return false;
         }

       }
       return true;
    }
};