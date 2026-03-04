class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int>isOneRow(m,0);
        vector<int>isOneColumn(n,0);
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    isOneRow[i]++;
                    isOneColumn[j]++;
                }
            }
        }
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1 && isOneRow[i]==1 && isOneColumn[j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};