class Solution {
public:
       bool hasGroupsSizeX(vector<int>& deck) {
        if (deck.size() < 2) return false;

        std::unordered_map<int,int> freq;
        for (int x : deck) ++freq[x];

        int g = 0;
        for (auto& kv : freq) {
            g = gcd(g, kv.second);
            if (g == 1) return false;
        }
        return g >= 2;
    }
};