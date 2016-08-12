class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto it = nums.begin();
        for(int i = 0;i < nums.size(); ++i){
            if(*it == 0){
                nums.erase(it);
                nums.push_back(0);
            }else{
                ++it;
            }
        }
    }
};
