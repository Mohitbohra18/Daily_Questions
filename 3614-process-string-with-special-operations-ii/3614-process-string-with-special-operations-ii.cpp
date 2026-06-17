class Solution {
public:
    char processStr(string s, long long k) {
        const long long LIM = 4e18;

        vector<long long> lenAfter(s.size());

        long long len = 0;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if ('a' <= c && c <= 'z') {
                len++;
            }
            else if (c == '*') {
                if (len > 0) len--;
            }
            else if (c == '#') {
                len = min(LIM, len * 2);
            }
            // '%' doesn't change length

            lenAfter[i] = len;
        }

        if (k >= len) return '.';

        for (int i = (int)s.size() - 1; i >= 0; i--) {
            char c = s[i];
            long long curLen = lenAfter[i];

            if ('a' <= c && c <= 'z') {
                if (k == curLen - 1)
                    return c;

                len = curLen - 1;
            }
            else if (c == '#') {
                long long prevLen = curLen / 2;
                k %= prevLen;
                len = prevLen;
            }
            else if (c == '%') {
                k = curLen - 1 - k;
                len = curLen;
            }
            else if (c == '*') {
                long long prevLen = curLen + 1;
                len = prevLen;
            }
        }

        return '.';
    }
};