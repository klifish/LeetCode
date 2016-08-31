class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> result;
        
        for(auto i : nums){
            auto ret = result.insert(i);
            if(!ret.second){
                result.erase(i);
            }
        }
        
        return *result.begin();
    }
};
/**
 * 以上代码性能太差，优化
 * */
 
