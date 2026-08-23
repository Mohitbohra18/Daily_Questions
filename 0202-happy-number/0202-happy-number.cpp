class Solution {
public:
    bool isHappy(int n) {
        set<long long> s;
        while(n!=1)
        {
            if(s.find(n)!=s.end())
            {
                return false;
            }
              s.insert(n);
              long long sum=0;
              while(n!=0)
              {
                int d=n%10;
                sum+=(d*d);
                n=n/10;
              }
              n=sum;
            

        }
       
        return true;
    }
};