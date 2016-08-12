class Solution {
public:
    int integerBreak(int n) {
        if(n == 2){
            return 1;
        }else if(n == 4){
            return 4;
        }else if(n == 3){
            return 2;
        }
        
        int i3 = n / 3;
        
        int leave = n - i3 * 3;
        
        if(leave == 1){
            leave = 4;
            i3--;
        }
        int max = 1;
        
        for(int i = 0;i < i3;i++){
            max *= 3;
        }
        
        if(leave == 0){
            return max;
        }else{
            return max * leave;
        }
    }
};
