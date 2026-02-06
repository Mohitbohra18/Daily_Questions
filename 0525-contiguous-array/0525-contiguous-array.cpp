class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int pfix = 0;
        int maxLen = 0;

        unordered_map<int, int> mp;
        mp[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                pfix -= 1;
            else
                pfix += 1;

            if (mp.find(pfix) != mp.end()) {
                maxLen = max(maxLen, i - mp[pfix]);
            } else {
                mp[pfix] = i;
            }
        }

        return maxLen;
    }
};
