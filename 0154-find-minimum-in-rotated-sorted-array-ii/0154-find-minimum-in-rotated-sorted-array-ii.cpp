class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[high]) {
                // Minimum lies in right half
                low = mid + 1;
            }
            else if (nums[mid] < nums[high]) {
                // Minimum lies in left half including mid
                high = mid;
            }
            else {
                // nums[mid] == nums[high]
                // Cannot determine side, reduce search space
                high--;
            }
        }
        return nums[low];
    }
};