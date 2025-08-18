class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> plsone;
        int n=digits.size();

        for(int i=0;i<n;i++)
        {
           plsone.push_back(digits[i]);
        }
        
        for(int i=n-1;i>=0;i--)
        {
            if(plsone[i]==9)
            {
               plsone[i]=0; 
            }
            else
            {
                plsone[i]++;
                break;
            }
        }
        if(plsone[0]==0)
        {
            plsone.insert(plsone.begin(),1);
        }

        return plsone;
        
    }
};