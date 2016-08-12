class Solution {
public:
    int climbStairs(int n) {
                int *ways = new int[2]{1,1};
        for(int i = 2;i <= n;++i){
            int temp = ways[1];
            ways[1] = ways[0] + ways[1];
            ways[0] = temp;
        }
        return ways[1];
    }
};
