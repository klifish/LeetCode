class Solution {
public:
    bool isHappy(int n) {
        if(n < 0){
            return false;
        }
        
        int sum = n;
        set<int> isRepeat; 
        
        while(true){
            vector<int> integer;
            
            while(sum > 0){
                integer.push_back(sum % 10);
                sum /= 10;
            }
            
            for(auto it = integer.begin();it != integer.end();++it){
                sum += pow(*it,2);
            }
            
            if(sum == 1){
                return true;
            }
            
            if(isRepeat.find(sum) != isRepeat.end()){
                return false;
            }else{
                isRepeat.insert(sum);   
            }
            

        }
    }
};
