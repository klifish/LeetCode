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

