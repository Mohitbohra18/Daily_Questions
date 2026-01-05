class Solution {
public:
    string frequencySort(string s) {
    //    unordered_map<char, int> freqMap;
    // for (char c : s) freqMap[c]++;

    // priority_queue<pair<int, char>> maxHeap;
    // for (auto &p : freqMap) {
    //     maxHeap.push({p.second, p.first}); 
    // }

    // string result = "";
    // while (!maxHeap.empty()) {
    //     auto [freq, ch] = maxHeap.top();
    //     maxHeap.pop();
    //     result.append(freq, ch);
    // }

    // return result;


vector<int> freq(256, 0);
for(char ch : s)
    freq[ch]++;

vector<pair<char,int>> v;

for(int i = 0; i < 256; i++) {
    if(freq[i] > 0) {
        v.push_back({char(i), freq[i]});
    }
}

sort(v.begin(), v.end(), [](auto &a, auto &b) {
    return a.second > b.second;
});

 string res="";
 for(auto it:v)
 {
    res.append(it.second,it.first);
 }
return res;
    }
};