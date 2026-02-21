class Solution {
public:
    int countSet(int n)
    {
        int count=0;
        while(n>0)
        {
            if(n&1)count++;

            n=n>>1;
        }
        return count;
    }

    int countPrimeSetBits(int left, int right) {
        int count=0;
        vector<int> prime={2,3,5,7,11,13,17,19};

        for(int i=left;i<=right;i++)
        {
            if(find(prime.begin(),prime.end(),countSet(i))!=prime.end())
            count++;
        }
        return count;

    }
};
