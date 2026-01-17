class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        // int zero=0;
        // int one=0;
        // int two=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]==0)
        //     {
        //         zero++;
        //     }
        //     else if(nums[i]==1)
        //     {
        //         one++;
        //     }
        //     else
        //     {
        //         two++;
        //     }
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(zero>0)
        //     {
        //         nums[i]=0;
        //         zero--;
        //     }
        //     else if(one!=0)
        //    { nums[i]=1;
        //     one--;
        //     }
        //     else 
        //    { nums[i]=2;
        //     two--;
        //     }
        // }

        // Two Pointer Approach 

        int i=0,j=n-1;
        int mid=0;

        while(mid<=j)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[i]);
                i++;
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[j]);
                j--;
            }
            else
            {

            mid++;
            }
        }
        
       
    }
};