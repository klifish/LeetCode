class Solution {
public:
    char findTheDifference(string s, string t) {
        int ns = s.length();
        int nt = t.length();
        
        unordered_map<char,int> m;
        
        for(int i = 0; i < ns; ++i){
            m[s[i]]++;
        }
        
        for(int j = 0; j < nt; ++j){
            m[t[j]]--;
        }
        
        for(auto p : m){
            if(p.second)
                return p.first;
        }
        
        return NULL;
    }
};
