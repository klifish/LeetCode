class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(auto itr = nums.begin();itr != nums.end();++itr){
            ++m[*itr];
        }
        
        int answer = 0;
        int buf = 0;
        for(auto i = m.begin();i != m.end();++i){
            if(i->second > buf){
                buf = i->second;
                answer = i->first;
            }
        }
        
        return answer;
    }
};
