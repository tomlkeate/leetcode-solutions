class Solution:
    def repeatedCharacter(self, s: str) -> str:
        bitArray = 0
        for c in s:
            if bitArray & (1 << ord(c) - 97):
                return c
            bitArray |= (1 << ord(c) - 97)
