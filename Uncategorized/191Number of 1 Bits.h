class Solution {
public:
    int hammingWeight(uint32_t n) {
        int mask = 1;
        int hw = 0;
        int s = 0;
        
        while(s < 32){
            if((n & (mask<<s)) != 0){
                hw++;
            }
            s++;
        }
        return hw;
    }
};
