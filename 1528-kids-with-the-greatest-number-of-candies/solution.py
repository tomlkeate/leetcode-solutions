class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        max_candy = max(candies)
        return [(max_candy <= candy + extraCandies) for candy in candies]
