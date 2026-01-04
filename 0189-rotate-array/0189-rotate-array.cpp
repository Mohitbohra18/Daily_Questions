class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        
       if(n<=1)
       {
        return;
       }
       k=k%n;
        int ix=n-k;
        int temp[n];
       int j=0;

        for(int i=ix;i<n;i++)
        {
          temp[j]=nums[i];
          j++;
        }
        for(int i=0;i<ix;i++)
        {
          temp[j]=nums[i];
          j++;
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=temp[i];
        }
        
    }
};