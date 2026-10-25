class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxProfit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }
            else{
                maxProfit=max(maxProfit,prices[i]-minPrice);
            }
        }
        return maxProfit==INT_MIN?0:maxProfit; 
    }
};
