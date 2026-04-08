class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minValue = prices[0]
        maxProf = 0

        for sell in prices:
            maxProf = max(maxProf, sell-minValue)
            minValue = min(sell, minValue)

        return maxProf
        