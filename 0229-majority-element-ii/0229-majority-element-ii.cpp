class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> res;

        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());

        vector<int> feq(mx - mn + 1, 0);

        for (int x : nums)
            feq[x - mn]++;
        for (int i = 0; i < feq.size(); i++) {
            if (feq[i] > n / 3)
                res.push_back(i + mn);
        }
        return res;
    }
};