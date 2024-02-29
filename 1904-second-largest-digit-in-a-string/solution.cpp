class Solution {
public:
    int secondHighest(string s) {
        int prev = -1, max = -1;
        for (char c : s) {
            c -= '0';
            if (c >= 0 && c <= 9) {
                if (c > prev && c < max)
                    prev = c;
                else if (c > max) {
                    prev = max;
                    max = c;
                }
            }
        }
        return prev;
    }
};
