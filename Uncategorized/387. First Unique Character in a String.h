class Solution {
public:
    int firstUniqChar(string s) {
        
        int n = s.length();
        
        if(n == 0)
            return -1;
        
        unordered_map<char,int> m;
        unordered_map<char,int> m1;
        
        for(int i = 0; i < n; ++i){
            m[s[i]] = i;
            m1[s[i]]++;
        }
        
        for(int i = 0; i < n; ++i){
            if(m[s[i]] == i && m1[s[i]] == 1){
                return i;
            }
        }
        
        return -1;
    }
};
/**
 * 说实在的，这性能，我都看不下去了
 * */
 
 /**
  * 优化——好一些
  */
  class Solution {
public:
    int firstUniqChar(string s) {
        
        int n = s.length();
        
        if(n == 0)
            return -1;
        
        unordered_map<char,int> m1;
        
        for(int i = 0; i < n; ++i){
            m1[s[i]]++;
        }
        
        for(int i = 0; i < n; ++i){
            if(m1[s[i]] == 1){
                return i;
            }
        }
        
        return -1;
    }
};
