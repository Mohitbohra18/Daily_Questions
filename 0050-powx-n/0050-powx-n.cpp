class Solution {
public:

    double pew(double x, long long n)
    {
        if(n == 0)
            return 1;

        double half = pew(x, n / 2);

        if(n % 2 == 0)
            return half * half;

        return x * half * half;
    }

    double myPow(double x, int n)
    {
        long long nn = n;

        if(nn < 0)
            return 1 / pew(x, -nn);

        return pew(x, nn);
    }
};