class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        // unordered_map<int,pair<int,int>> m;
        int sum=0;
        int f_sum=0;

        for(int i=0;i<n;i++)
        {    c=0;
            sum=0;
            for(int j=1;j<=sqrt(nums[i]);j++)
            {
                if(nums[i]%j==0)
                {
                    
                    int k= nums[i]/j ;
                    if(j==k)
                    {
                        c++;
                        sum+=j;
                    }
                    else
                    {   c+=2;
                        sum=sum+k+j;
                    }
                }
            }
            if(c==4)
            {
                f_sum+= sum;
            }
            // m[nums[i]].first=c;
            // m[nums[i]].second=sum;
            
        }

        return f_sum;
        
    }
};