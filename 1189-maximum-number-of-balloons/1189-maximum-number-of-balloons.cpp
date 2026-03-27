class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> umap;

        // Step 1: Count frequency of each character
        for(char ch : text){
            umap[ch]++;
        }

        // Step 2: Calculate the minimum possible balloons
        int result = INT_MAX;

        result = min(result, umap['b']);
        result = min(result, umap['a']);
        result = min(result, umap['l'] / 2);
        result = min(result, umap['o'] / 2);
        result = min(result, umap['n']);

        return result;
    }
};