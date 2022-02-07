
int maxProfit(int* prices, int pricesSize){
    int min_price = INT_MAX;
    int max_profit = 0;
    
    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < min_price) {
            min_price = prices[i];
        }
        
        int profit = prices[i] - min_price;
        if (profit > max_profit) {
            max_profit = profit;
        }
    }
    
    return max_profit;
}
