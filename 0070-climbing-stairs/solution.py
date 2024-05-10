class Solution:
    def climbStairs(self, n: int) -> int:
        if (n == 1):
            return 1
        one_prev = 1
        two_prev = 1
        total = 0
        for i in range(n - 1):
            total = one_prev + two_prev
            two_prev = one_prev
            one_prev = total
        return total
