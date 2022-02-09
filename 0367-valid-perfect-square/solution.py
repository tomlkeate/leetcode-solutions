class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        left_multiple = 1
        right_multiple = num
        while left_multiple <= right_multiple:
            mid = (left_multiple + right_multiple) // 2
            if mid * mid < num:
                left_multiple = mid + 1
            elif mid * mid > num:
                right_multiple = mid - 1
            else:
                return True
        return False
