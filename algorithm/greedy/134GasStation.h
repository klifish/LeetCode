class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int start = 0;
        int gasRemain = 0;
        int total = 0;
        
        for(int i = 0; i < gas.size(); ++i){
            total += (gas[i] - cost[i]);
            if(gasRemain < 0){
                gasRemain = gas[i] - cost[i];
                start = i;
            }else{
                gasRemain +=  gas[i] - cost[i];
            }
        }
        
        return total < 0 ? -1 : start;
    }
};

/**
 * 这道题折腾了两天，关键是卡在结束时的判决条件上。
 * 再有就是使用while循环。之前一直觉得while和for循环是等价的，这里在解题时，使用while感觉很别扭。应该研究下for和while的关系。
 * 值得肯定的是，随着思考的深入，逐渐也能获得好的解题思路
 * */
