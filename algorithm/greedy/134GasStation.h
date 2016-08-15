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
