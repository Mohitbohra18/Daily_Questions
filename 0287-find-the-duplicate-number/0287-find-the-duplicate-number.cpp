class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
    //    sort(nums.begin(),nums.end());
    //    int element;

    //     for(int i=1;i<n;i++)
    //     {
    //         if(nums[i-1]==nums[i])
    //         {
    //             element=nums[i];
    //         }
    //     }

       
    //     return element;
    int val=0;
       for(int i=0;i<n;i++)
       {
         val=val^nums[i];
       }
    //    if(nums[0]==val)return val;

       for(int i=0;i<n;i++)
       {
         val=val^i;
       }

       return val;
    }
};