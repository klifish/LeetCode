/**
 * 在做376. Wiggle Subsequence时，把题设要求理解错误，解成了最大连续摇摆序列，代码如下；已测试
 * */
class Solution {
public:
    int State(int current,int last){
        if(current == last)
            return 0;
        return current < last ? -1 : 1;
    }
    
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.empty())
            return 0;
        
        if(nums.size() == 1)
            return 1;
            
        /**
         * -1:小于
         * 0：等于
         * 1：大于
         */
        
        int result = 0;
        int w = 0;
        
        int state = 0;
        int start_pointer = 0;
        
        state = State(nums[1],nums[0]);
        if(state){  //state=0
            w = 2;
            if(w > result)
                result = w;
            start_pointer = 0;
        }else{
            w = 1;
            if(w > result)
                result = w;
                
            start_pointer = 1;
        }

        for(unsigned i = 2; i < nums.size(); ++i){
            if(state == 0){ //state=0
                if((state = State(nums[i],nums[i-1])) == 0){    //更新state
                    start_pointer = i;  //更新start_pointer
                    continue;   //w不变；result不变
                }else{
                    w++;    //更新w
                    if(w > result)  //start_pointer不变
                        result = w;//更新result
                }
            }else{  //state != 0
                int last_state = state; //缓存state
                state = State(nums[i],nums[i-1]);
                if(state == 0){ //新state=0
                    start_pointer = i;  //更新start_pointer
                    w = 1;  //更新w
                    if(w > result)
                        result = w;
                }else{  //新state!=0
                    if(state*last_state < 0){
                        w++;
                        if(w > result){
                            result = w;
                        }
                    }else{
                        start_pointer = i;  //更新start_pointer
                        w = 2;//更新w
                        if(w > result)
                            result = w;
                    }
                }
            }
        }
        return result;
    }
};
