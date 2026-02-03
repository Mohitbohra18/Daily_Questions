class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n=arr.size();
        int nodelete=arr[0];
        int onedelete=INT_MAX;
        int res=arr[0];

        for(int i=1;i<n;i++)
        {
            
            int prevone=onedelete;
            int prevno=nodelete;
            int v=0;

            nodelete=max(nodelete+arr[i],arr[i]);

            if(onedelete==INT_MAX)
            {
                v=arr[i];
            }
            else
            {
                v=onedelete+arr[i];

            }
            onedelete=max(v,prevno);
        res=max(res,max(nodelete,onedelete));
        }
        return res;
        
    }
};