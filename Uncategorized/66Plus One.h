class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        auto it = digits.rbegin();
        int c = 1;
        
        vector<int> sum;
        
        while(c == 1){
            if(*it + c == 10){
                *it = 0;
                c = 1;
                it++;
                
                if(it == digits.rend()){
                    vector<int> sum = {1};
                    for(auto pos = digits.begin();pos != digits.end();++pos){
                        sum.push_back(*pos);
                    }
                    return sum;
                }
                
            }else{
                *it = *it +c;
                c = 0;
            }
        }
        return digits;
    }
};
