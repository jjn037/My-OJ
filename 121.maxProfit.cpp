int gupiao(vector<int>& prices){
    if(prices.empty()) return 0;
    int maxMargin = 0;
    for(int i = 0; i < prices.size(); i++){
        for(int j = i+1; j < prices.size(); j++){
                if(price[j] - prices[i] > maxMargin)
                    maxMargin = price[j] - prices[i];
            }
    }
    return maxMargin;
}

int maxProfit(vector<int>& prices){
    if(prices.empty()) return 0;
    int maxMargin = 0;
    int min = price[0];
    for(int i = 0; i < prices.size(); i++){
        if(prices[i]<min){
            min = prices[i];
        }
        else{
                if(price[i] -min > maxMargin)
                    maxMargin = price[i] - min;
            }
    }
    return maxMargin;
}

int maxProfit(vector<int>& prices){
    if(prices.empty()) return 0;
    int maxMargin = 0;
    int min = price[0];
    for(int i = 0; i < prices.size(); i++){
        if(prices[i]<min){
            min = prices[i];
        }
        else{
                if(price[i] -min > maxMargin)
                    maxMargin = price[i] - min;
            }
    }
    return maxMargin;
}