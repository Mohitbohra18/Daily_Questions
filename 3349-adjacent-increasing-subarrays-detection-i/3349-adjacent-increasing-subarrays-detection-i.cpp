class Solution {
public:
    bool check(int a,vector<int>&nums,int k,int n){
    
        for(int i=a+1;i<a+k;i++){
            if(nums[i-1]>=nums[i]) return false;
        }
        
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        if(2*k>n) return false;
        for(int i=0;i<=n-2*k;i++){
            if(check(i,nums,k,n) && check(i+k,nums,k,n)){
                return true;
            }
        }
        return false;
    }
};