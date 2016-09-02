class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        
        for(auto i:nums){
            m[i];
        }
        
        vector<int> tmp;
        for(auto j:m){
            tmp.push_back(j.first);
        }
        swap(nums,tmp);
        
        return nums.size();
    }
};
/**
 * 慢
 * */
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n == 0){
            return 0;
        }
        
        int i = 0;
        int j = 0;
        
        while(j < n){
            if(nums[i] == nums[j]){
                j++;
            }else{
                i++;
                nums[i] = nums[j];
                j++;
            }
        }
        
        return i+1;
    }
};
/**
 * 更慢！！！
 * */
