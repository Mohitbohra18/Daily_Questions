class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string s;

        for (auto &word : words) {
            int sum = 0;

            for (char ch : word) {
                sum += weights[ch - 'a'];
            }

            int r = sum % 26;
            s.push_back('z' - r);
        }

        return s;
    }
};