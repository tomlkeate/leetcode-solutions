class Solution {
public:
    int firstUniqChar(string s) {
        long long unsigned int a = 0;
        long long unsigned int b = 0;
        for (int i = 0; i < s.size(); i++) {
            if (b & (1 << (s[i] - 'a'))) 
                a = a | (1 << (s[i] - 'a'));
            else 
                b = b | (1 << (s[i] - 'a'));
        }
        for (int i = 0; i < s.size(); i++) {
            if (!(a & (1 << (s[i] - 'a'))))
                return i;
        }
        return -1;
    }
};
