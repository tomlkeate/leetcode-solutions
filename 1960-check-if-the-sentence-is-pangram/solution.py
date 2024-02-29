class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        bitArray = 0
        for c in sentence:
            bitArray |= 1 << (ord(c) - 97)
            if bitArray == 67108863:
                return True
        return bitArray == 67108863
