class Solution {
public:
    string reverseString(string s) {
        string temp;
        for(int i = s.size() - 1; i >= 0; i--){
            temp += s[i];
        }
        
        return temp;
    }
};
