class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty() || prices.size() == 1)return 0;
        
        int p = 0;

        for(unsigned i = 1; i < prices.size(); ++i){
            if(prices[i] > prices[i-1]){
                p+=prices[i]-prices[i-1];
            }
        }
        
        return p;
    }
};
