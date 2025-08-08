class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        vector<int> res;
        int n=nums1.size();  
        int m=nums2.size();  
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int n1=0;
        int n2=0;
        

        while(n1<n&&n2<m)
        {
            if(nums1[n1]==nums2[n2])
            {   
                 if (res.empty() || res.back() != nums1[n1]) {
                    res.push_back(nums1[n1]);
                }
                n1++;
                n2++;
            }
            else if(nums1[n1]<nums2[n2])
            {
               n1++;
            }
            else
            {
                n2++;
            }
        }

        return res;
    }
};