class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n=nums.size();
        long long gmax=*max_element(nums.begin(),nums.end());
        long long gmin=*min_element(nums.begin(),nums.end());

        return k*(gmax-gmin);        
    }
};