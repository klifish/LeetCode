class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> temp;
        auto itr = nums.begin();
        while(itr != nums.end()){
            auto temp_pair = temp.insert(*itr);
            if(temp_pair.second == false){
                return true;
            }
            itr++;
        }
        
        return false;
    }
};
