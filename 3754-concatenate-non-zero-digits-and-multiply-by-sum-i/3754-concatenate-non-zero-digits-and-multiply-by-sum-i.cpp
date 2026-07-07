class Solution {
public:
    long long sumAndMultiply(int n) {
        int sum=0;
        long long x=0;
        int d=0;
        long long ans=0;
        while(n!=0)
        {
            d=n%10;
            if(d!=0)
            {
               x=x*10+d;
            }
            sum+=d;
            n/=10;
        }

        if(x==0)return 0;
        n=x;
        x=0;

        while (n != 0) {
        int digit = n % 10;
        x = x * 10 + digit;
        n /= 10;
    }
         ans=x*sum;
        return ans;
        
    }
};