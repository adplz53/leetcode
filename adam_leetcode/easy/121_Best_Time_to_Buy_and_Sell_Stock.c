// 121. Best Time to Buy and Sell Stock

int maxProfit(int *prices, int pricesSize)
{
    int low = 0, profit = 0;
    for (int i = 0; i < pricesSize; i++)
    {
        if (prices[i] < prices[low])
            low = i;
        int temp = prices[i] - prices[low];
        if (temp > profit)
            profit = temp;
    }
    return profit;
}

// Runtime: 216 ms, faster than 35.89% of C online submissions for Best Time to Buy and Sell Stock.
// Memory Usage: 13.1 MB, less than 38.34% of C online submissions for Best Time to Buy and Sell Stock.