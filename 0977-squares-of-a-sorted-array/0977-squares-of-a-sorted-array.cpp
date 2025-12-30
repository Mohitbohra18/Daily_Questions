class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int i = 0, j = 0;
        for (int k = 0; k < n; k++)
            if (nums[k] < 0)
                j++;

        i = j - 1;

        for (int i = 0; i < n; i++) {
            nums[i] *= nums[i];
        }
        while (i >= 0 && j < n) {
            if (nums[i] <= nums[j]) {
                ans.push_back(nums[i]);
                i--;
            } else {
                ans.push_back(nums[j]);
                j++;
            }
        }
        while (i >= 0) {
            ans.push_back(nums[i]);
            i--;
        }
        while (j < n) {
            ans.push_back(nums[j]);
            j++;
        }
        
        return ans;
    }
};