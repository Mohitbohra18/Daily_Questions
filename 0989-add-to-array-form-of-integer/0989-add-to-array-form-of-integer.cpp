class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        vector<int> res;
        int sum = 0;
        int i = n - 1;

        while (i >= 0 || k > 0) {
            if (i < 0) {
                sum = k % 10;
                res.insert(res.begin(), sum);
                k = k / 10;

            } else {
                sum = num[i] + (k % 10);
                if (sum > 9) {
                    res.insert(res.begin(), sum % 10);
                    k = k / 10 + 1;
                } else {
                    res.insert(res.begin(), sum);
                    k = k / 10;
                }
            }

           i--;
        }
 
        return res;
        }

    
};