class Solution {
public:
    double myPow(double x, long long  n) {
        if(n==0)
        {
            return 1;
        }
        if(n<0)
        {
            x=1/x;
            n=n*(-1);
        }
        double half=myPow(x,n/2);
        half=half*half;

        if(n%2==1)
        {
            return half*x;
        }
        return half;
        
    }
};