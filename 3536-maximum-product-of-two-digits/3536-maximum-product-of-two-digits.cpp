class Solution {
public:
    int maxProduct(int n) {
        vector<int> temp;
        

        while(n!=0)
        {
            int digit=n%10;
            n=n/10;
            temp.push_back(digit);
        }

        sort(temp.begin(),temp.end());
        int sz=temp.size();

        int ans=temp[sz-1]*temp[sz-2];
        return ans;


    }
};