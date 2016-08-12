class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        
        if(prices.empty() || prices.size() == 1){
            return 0;
        }else{
            int min = prices[0];
            int max = prices[0];
            
            for(auto it = prices.begin(); it != prices.end();++it){
                if(*it > max){
                    max = *it;
                    if(profit < (max - min))
                        profit = max - min;
                    continue;
                }
                
                if(*it < min){
                    max = *it;
                    min = *it;
                }
                
            }
        }
        
        return profit;
    }
};
