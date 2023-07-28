int maxProfit(int* prices, int pricesSize){
    int maxProfit = 0, localMin = prices[0];
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] - localMin > maxProfit)
            maxProfit = prices[i] - localMin;
        if (prices[i] < localMin)
            localMin = prices[i];
    }
    return maxProfit;
}
