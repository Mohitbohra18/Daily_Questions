class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows);
        ans[0]={1};
        if(numRows==1) return ans;
        for(int i=1;i<numRows;i++){
            vector<int>list(i+1);
            list[0]=1;
            list[i]=1;
            for(int j=1;j<i;j++){
                list[j]=ans[i-1][j-1]+ans[i-1][j];
            }
            ans[i]=list;
        }
        return ans;
    }
};