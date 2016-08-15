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

/**
 * 对于题目的理解还是有偏差，总是加入自己的主观想法，使题目复杂化
 * */
