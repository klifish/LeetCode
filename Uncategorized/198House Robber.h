class Solution {
public:
    int rob(vector<int>& nums) {
        
        vector<int> dp(3,0);
        
        if(nums.size() == 0){
            return 0;
        }
        
        if(nums.size() == 1){
            return nums[0];
        }
        
        if(nums.size() == 2){
            return nums[0] > nums[1] ?  nums[0] : nums[1];
        }
        
        if(nums.size() > 2){
            dp[0] = nums[0];
            nums[0] > nums[1] ? dp[1] = nums[0] : dp[1] = nums[1];
            
            for(int i = 2;i < nums.size(); ++i){
                if(dp[0] + nums[i] > dp[1]){
                    dp[2] = dp[0] + nums[i];
                    dp[0] = dp[1];
                    dp[1] = dp[2];
                }else{
                    dp[2] = dp[1];
                    dp[0] = dp[1];
                    dp[1] = dp[2];
                }
            }
        }
        
        return dp[2];
    }
};
