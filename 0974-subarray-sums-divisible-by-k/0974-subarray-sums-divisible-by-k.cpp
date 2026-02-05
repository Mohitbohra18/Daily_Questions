class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int K) {
    unordered_map<int, int> mp;
    mp[0] = 1;  

    int prefixSum = 0;
    int count = 0;

    for(int num : nums) {
        prefixSum += num;
        int rem = (prefixSum % K + K) % K;

        if(mp.find(rem) != mp.end()) {
            count += mp[rem];
        }

        mp[rem]++;
    }

    return count;
}

};