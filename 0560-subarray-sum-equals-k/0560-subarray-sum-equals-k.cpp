class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {


        // prefix summ

   unordered_map<int, int> freq;
        freq[0] = 1;   // prefix sum = 0 before starting

        int prefixSum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];

            // check if (prefixSum - k) exists
            if (freq.find(prefixSum - k) != freq.end()) {
                count += freq[prefixSum - k];
            }

            // store current prefix sum
            freq[prefixSum]++;
        }

        return count;
    }
};