class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # using sliding window technique
        current_cheapest = prices[0]
        current_max_profit = 0
        for i in range(len(prices)):
            if prices[i] < current_cheapest:
                current_cheapest = prices[i]
            if prices[i] - current_cheapest > current_max_profit:
                current_max_profit = prices[i] - current_cheapest
        return current_max_profit
