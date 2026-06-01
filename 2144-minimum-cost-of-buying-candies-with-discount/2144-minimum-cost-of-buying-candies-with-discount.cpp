class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        if(n<2)return cost[0];

        int mincost=0;

        sort(cost.begin(),cost.end());
        int x=0;

        for(int i=n-1;i>=0;i--)
        {
            if(x!=2)
            {
               mincost+=cost[i];
               x++;
            }
            else
            {
                x=0;
            }
                      
        }
        return mincost;
    }
};