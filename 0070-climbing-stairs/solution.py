class Solution:
    def climbStairs(self, n: int) -> int:
        prev_one, prev_two = (1, 1)
        for i in range(n - 1, 0, -1):
            temp = prev_one
            prev_one = prev_one + prev_two
            prev_two = temp
        return prev_one
