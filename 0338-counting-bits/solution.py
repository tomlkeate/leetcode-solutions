class Solution(object):
    def countBits(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        solution = [0] * (n + 1)
        for i in range(n+1):
            N = i
            while N != 0:
                solution[i] += N & 1
                N = N >> 1
        return solution
