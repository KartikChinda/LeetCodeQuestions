

int maxProfit(int* prices, int pricesSize){
    int res = 0;
    for(int i = 1; i<pricesSize; i++){
        if(prices[i]>prices[i-1]) res+= prices[i]-prices[i-1];
    }
    
    return res;
}