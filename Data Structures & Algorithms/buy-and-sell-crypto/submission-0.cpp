class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min_price = INT_MAX;
        int max_profit = INT_MIN;

        for(int i=0;i<prices.size();i++){
            if(prices[i] < min_price){
                min_price = prices[i];
            }
            else{
                max_profit = max(max_profit,prices[i]-min_price);
            }
        }
        if(max_profit == INT_MIN){
            return 0;
        }
        return max_profit;
    }
};
