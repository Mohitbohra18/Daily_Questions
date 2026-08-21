class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int k = -1;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                k = i;
            }
            nums[i] = nums[i] * nums[i];
        }
        if(k==-1)return nums;
        int neg = k;
        int pos = k + 1;

        while (neg >= 0 && pos < n) {
            if (nums[neg] <= nums[pos]) {
                ans.push_back(nums[neg]);
                neg--;
            } else {
                ans.push_back(nums[pos]);
                pos++;
            }
        }
        while (neg >= 0) {
            ans.push_back(nums[neg]);
            neg--;
        }
        while (pos < n) {
            ans.push_back(nums[pos]);
            pos++;
        }

        return ans;
    }
};