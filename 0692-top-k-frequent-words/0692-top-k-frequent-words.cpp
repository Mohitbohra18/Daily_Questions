class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> freq;
        for (auto& w : words) freq[w]++;

        // min-heap on {-count, word}
        priority_queue<pair<int,string>, vector<pair<int,string>>, greater<pair<int,string>>> pq;

        for (auto& it : freq)
            pq.push({-it.second, it.first});   // count ko NEGATIVE karke daala

        vector<string> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);    // seedha top k nikaal lo
            pq.pop();
        }
        return ans;   // koi reverse nahi, koi custom comparator nahi!
    }
};