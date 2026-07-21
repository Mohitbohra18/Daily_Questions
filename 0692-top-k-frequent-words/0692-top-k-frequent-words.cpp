class Solution {
public:
    class cmp {
    public:
        bool operator()(pair<int,string> &a, pair<int,string> &b) {
            if (a.first == b.first)
                return a.second > b.second;
            return a.first < b.first;
        }
    };

    vector<string> topKFrequent(vector<string>& words, int k) {

        map<string,int> mp;

        for (string &w : words)
            mp[w]++;

        priority_queue<pair<int,string>,
                       vector<pair<int,string>>,
                       cmp> pq;

        for (auto &e : mp)
            pq.push({e.second, e.first});

        vector<string> res;

        while (k--) {
            res.push_back(pq.top().second);
            pq.pop();
        }

        return res;
    }
};