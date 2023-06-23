class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices) == 1:
            return 0
        currentBuy = prices[0]
        currentProfit = 0
        for index in range(1, len(prices)):
            if prices[index-1] < prices[index]:
                currentProfit += prices[index] - prices[index-1]
        return currentProfit

