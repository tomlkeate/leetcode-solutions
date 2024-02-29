class Solution {
public:
    bool checkIfPangram(string sentence) {
        int32_t bitArray = 0;
        for (char c : sentence) {
            bitArray |= 1 << (c - 'a');
            if (bitArray == 67108863)
                return true;
        }
        return bitArray == 67108863;
    }
};
