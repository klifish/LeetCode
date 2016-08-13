class Solution {
public:
    int Status(int current,int last){
        return current < last ? -1 : 1;
    }
    
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.empty())
            return 0;
        
        if(nums.size() == 1)
            return 1;
            
        int result = 1;
        int status = 0;
        
        if(nums[1] != nums[0]){
            status = Status(nums[1],nums[0]);
            result++;
        }
        
        for(unsigned i = 2; i < nums.size(); ++i){
            if(nums[i] == nums[i-1])
                continue;
            
            if(status == 0){
                status = Status(nums[i],nums[i-1]);
                result++;
                continue;
            }
            
            int last_status = status;
            status = Status(nums[i],nums[i-1]);
            
            if(status * last_status < 0)
                result++;
        }
        return result;
    }
};
