class Solution {
public:
    int sqsum(int n)
    {
        int sum=0;
        while(n)
        {
            sum+=(n%10 )* (n%10);
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        

        do
        {
            slow=sqsum(slow);
            fast=sqsum(sqsum(fast));
        }
        while(fast!=slow);

        return (slow==1);
        
    }
};