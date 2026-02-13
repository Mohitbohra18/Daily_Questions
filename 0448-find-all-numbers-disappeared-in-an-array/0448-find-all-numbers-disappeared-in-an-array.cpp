class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;

       int i=0;
       while(i<nums.size())
        {
            int cur=nums[i]-1;
            if(nums[i]!=nums[cur])
            {
                swap(nums[i],nums[cur]);
            }
            else{
                i++;
            }
        }

        for(int i=0;i<nums.size();i++)
        {
            if(i+1!=nums[i])
            {
                res.push_back(i+1);
            }
        }

        return res;
                
    }
};