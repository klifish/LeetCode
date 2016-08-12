class Solution {
public:
    string reverseVowels(string s) {
        //先找出元音及其位置
        vector<char> vs;
        for(int i = 0;i < s.size();++i){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                vs.push_back(s[i]);
            }
        }
        
        if(vs.empty()){
            return s;
        }else{
            for(int i = 0;i < s.size();++i){
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                    s[i] = *(vs.rbegin());
                    vs.pop_back();
                    if(vs.empty())
                        return s;
                }
            }
        }
        return s;
    }
};
