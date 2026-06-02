class Solution {
public:

    int solve(vector<int>& start1,
              vector<int>& dur1,
              vector<int>& start2,
              vector<int>& dur2)
    {
        int minEnd = INT_MAX;

        for(int i = 0; i < start1.size(); i++)
        {
            minEnd = min(minEnd, start1[i] + dur1[i]);
        }

        int ans = INT_MAX;

        for(int i = 0; i < start2.size(); i++)
        {
            int finish =
                max(minEnd, start2[i]) + dur2[i];

            ans = min(ans, finish);
        }

        return ans;
    }

    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration)
    {
        int landFirst =
            solve(landStartTime,
                  landDuration,
                  waterStartTime,
                  waterDuration);

        int waterFirst =
            solve(waterStartTime,
                  waterDuration,
                  landStartTime,
                  landDuration);

        return min(landFirst, waterFirst);
    }
};