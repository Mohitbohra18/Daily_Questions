class Solution {
public:
    bool isPossible(vector<int>& weights,int mid, int days)
    {
        int sum=0;
        int count=1;
        for(int i=0;i<weights.size();i++)
        {
            if(sum+weights[i]>mid)
            {
                count++;
                sum=0;
            }
            sum+=weights[i];
        }
        return count<=days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        int n=weights.size();

        for(int i=0;i<n;i++)
        {
            sum+=weights[i];
        }
        int l=*max_element(weights.begin(),weights.end());
        int r=sum;
        int ans=0;

        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(isPossible(weights,mid,days))
            {
                ans=mid;
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;

    }
};