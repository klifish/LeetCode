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
 
/**
 * 我自己确实没有往这方面想，挺牛逼的想法
 * */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = nums[0];
        
        for(int i = 1; i < nums.size();++i){
            result = result ^ nums[i];
        }
        
        return result;
    }
};
