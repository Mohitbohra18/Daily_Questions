class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int l=0;
        int h=n-1;
        int peak=0;
        
        while(l<h)
        {
            int m = l+(h-l)/2;

            if(arr[m]<arr[m+1])
            {
                l=m+1;
            }
            else
            {
                h=m;
            }
          
        }
        return l;
    }
};