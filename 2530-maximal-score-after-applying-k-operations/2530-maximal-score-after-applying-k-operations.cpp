class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
       int n=nums.size();
       long long score=0;
       priority_queue<int> pq(nums.begin(),nums.end());
       
       while(k>0)
       {
       int x=pq.top();
       pq.pop();
       score+=x;
       x=(x+2)/3;
       pq.push(x);
       k--;
       }

       
    return score;
    }
};