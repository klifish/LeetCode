class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        long miss = 1;   //可能需要添加的数
        long added = 0;  //需要被添加的数的个数
        long i = 0;
        while(miss <= n){
            if(i < nums.size() && nums[i] <= miss){
                miss += nums[i++];
            }else{
                miss += miss;
                added++;
            }
        }
        return added;
    }
};
