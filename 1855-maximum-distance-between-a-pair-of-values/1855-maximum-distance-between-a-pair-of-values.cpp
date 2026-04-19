class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int diff=0;
        int mx=-1;

        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size()-1)
        {
            if(i<=j&&nums1[i]<=nums2[j])
            {
                mx=max(mx,j-i);
            }

            if(nums1[i]>nums2[j+1])
            {
                i++;
            }
            j++;
        }
        mx=max(mx,j-i);
        return mx;
    }
};