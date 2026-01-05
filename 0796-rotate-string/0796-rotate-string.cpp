class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if (n != goal.size()) return false;

        for (int start = 0; start < n; start++) {
            int i = 0;
            int j = start;

            while (i < n && s[j % n] == goal[i]) {
                i++;
                j++;
            }

            if (i == n) return true;  // full match found
        }
        return false;
    }
};
