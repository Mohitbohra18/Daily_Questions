class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int k=nums1.size();
         
        for(int i=m;i<k;i++)
        {
            swap(nums1[i],nums2[i-m]);
        }

        sort(nums1.begin(),nums1.end());

        
         

     
    }
};