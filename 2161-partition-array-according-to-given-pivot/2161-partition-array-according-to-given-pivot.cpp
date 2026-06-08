class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int> small;
        vector<int> higher;
        vector<int> equal;
        int idx=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]>pivot)
        {
            higher.push_back(nums[i]);
        }
        else if(nums[i]<pivot)
        {
            small.push_back(nums[i]);
            
        }
        else
        {
            equal.push_back(nums[i]);
            
        }
    }
    for(int i=0;i<small.size();i++)
    {
        nums[idx++]=small[i];
        

    }
    for(int i=0;i<equal.size();i++)
    {
        nums[idx++]=equal[i];
        

    }
    for(int i=0;i<higher.size();i++)
    {
        nums[idx++]=higher[i];
        

    }



    return nums;
}
};