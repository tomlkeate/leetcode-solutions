class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        currentProfit = 0
        leftPointer = 0
        rightPointer = 1
        tempVal = 0
        while rightPointer < len(prices):
            if prices[rightPointer] > prices[leftPointer]:
                tempVal = prices[rightPointer] - prices[leftPointer]
                currentProfit = tempVal if tempVal > currentProfit else currentProfit
            elif prices[rightPointer] < prices[leftPointer]:
                leftPointer = rightPointer
            rightPointer += 1
        return currentProfit
