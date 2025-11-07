class Solution {
public:
    int check (int m,int n, int mid){
        int count=0;
        for(int i=1;i<=m;i++){
            count+=min(n,mid/i);
        }
        return count;

    }
    int findKthNumber(int m, int n, int k) {

        int l=1, r=m*n;
        int res=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            auto count=check(m,n,mid);
            if(count>=k){
                res=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};