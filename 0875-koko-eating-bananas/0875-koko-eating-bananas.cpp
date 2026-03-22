class Solution {
public:
   bool isPossible(vector<int>& piles,int mid,int h)
        {
            long long count=0;
            
            for(int i=0;i<piles.size();i++)
            {
                count+=(piles[i]+mid -1)/mid;
            }
             
             return count<=h;
        }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r=*max_element(piles.begin(),piles.end());
        int l=1;
        int ans=r;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(isPossible(piles,mid,h))
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