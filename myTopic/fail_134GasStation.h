class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(gas.size() == 1){
            if(gas[0] < cost[0]){
               return -1; 
            }else{
                return 0;
            }
        }
            
        int candidate = -1;
        int gas_remain = -1;
        
        //寻找起点
        for(unsigned i = 0; i < gas.size(); ++i){
            if(gas[i] >= cost[i]){
                candidate = i;
                
                int j = i;
                j++;
                j %= gas.size();
                gas_remain = gas[i] - cost[i];
            
                while(j != i){
                    if(gas[j] + gas_remain >= cost[j]){
                        gas_remain = gas[j] + gas_remain - cost[j];
                    }else{
                        gas_remain = -1;
                        break;
                    }
                    j++;
                    j %= gas.size();
                }
                if(j == i){
                    return candidate;
                }
            }
        }
        return -1;
    }
};
