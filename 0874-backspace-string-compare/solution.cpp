class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int sPtr = s.size()-1, tPtr = t.size() - 1;
        int sSkips = 0, tSkips = 0;
        while (sPtr >= 0 || tPtr >= 0) {
            while (sPtr >= 0) {
                if (s[sPtr] == '#') {
                    sSkips++;
                    sPtr--;
                } else if (sSkips > 0) {
                    sSkips--;
                    sPtr--;
                } else break;
            }
            while (tPtr >= 0) {
                if (t[tPtr] == '#') {
                    tSkips++;
                    tPtr--;
                } else if (tSkips > 0) {
                    tSkips--;
                    tPtr--;
                } else break;
            }
            if (sPtr >= 0 && tPtr >= 0 && t[tPtr] != s[sPtr]) {
                return false;
            }
            if (sPtr >= 0 != tPtr >= 0) 
                return false;
            sPtr--;
            tPtr--;
        }
        return true;
    }
};
