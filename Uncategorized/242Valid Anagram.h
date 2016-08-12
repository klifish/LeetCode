class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> ms;
        map<char,int> mt;
        
        for(int i = 0;i < s.size();++i){
            ++ms[s[i]];
        }
        
        for(int j = 0; j < t.size(); ++j){
            ++mt[t[j]];
        }
        if(ms == mt){
            return true;
        }else{
            return false;
        }
    }
};
