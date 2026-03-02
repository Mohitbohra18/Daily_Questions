class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>last(n);
        for(int i=0;i<n;i++){
            int next=-1;
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    next=j;
                }
            }
            last[i]=next;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(last[i]>i){
                int inx=-1;
                for(int j=i;j<n;j++){
                    if(last[j]<=i){
                        inx=j;
                        break;
                    }
                }
                if(inx==-1){
                    return -1;
                }
                for(int k=inx;k>i;k--){
                    swap(last[k],last[k-1]);
                    ans++;
                }
            }
        }
        return ans;
    }
};