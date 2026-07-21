class Solution {
public:
    void fnc(vector<int>& candidates,int target,int sum,int start,vector<int>&temp,vector<vector<int>>&res)
    {
        if(sum==target)
        {
            res.push_back(temp);
            return;
        }
        if(sum>target)return ;



        for(int num=start;num<candidates.size();num++)
        {
            
            temp.push_back(candidates[num]);
            fnc(candidates,target,sum+candidates[num],num,temp,res);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>temp;
        int sum=0;
        fnc(candidates,target,sum,0,temp,res);
        return res;

    }
};