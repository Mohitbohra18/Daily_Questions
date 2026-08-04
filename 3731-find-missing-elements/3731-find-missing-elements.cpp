class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> res;
        map<int , int> mp;

        for(int i=mn;i<=mx;i++)
        {
           mp[i]++;
        }

        for(int i=0;i<n;i++)
        {
                mp.erase(nums[i]);
        }

        for(auto m:mp)
        {
            res.push_back(m.first);
        }

        return res;

    }
};