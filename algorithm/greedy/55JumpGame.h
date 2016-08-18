class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxx = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(i <= maxx){
                maxx = max(maxx,i + nums[i]);
            }
        }
        return maxx >= nums.size()-1;
    }
};
