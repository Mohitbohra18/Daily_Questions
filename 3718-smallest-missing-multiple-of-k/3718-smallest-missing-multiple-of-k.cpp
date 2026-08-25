class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }

        for(int i=1;i<=nums.size();++i)
        {
            int num=k*i;
            if(s.find(num)==s.end())
            {
                return num;
            }
        }
        return k*(n+1);
        
    }
};