class Solution {
public:
    bool canWinNim(int n) {
        if(n>3){
            int remainNum=n%4;

            if(remainNum==0){
                return false;
            }else{
                return true;
            }
        }else{
            return true;
        }
    }
};
