/**
 * 题目地址：https://leetcode.com/problems/wiggle-subsequence/
 * 更新的代码更加简洁，思路更加清楚！
 * 注释没有交代清楚的部分：
 * 1、不好处理的节点：数组前两个节点，不处理的话，无法确定flag的初值————因此做特殊处理；
 *                    做特殊处理不影响性能，因为放到循环里依旧需要处理
 * 2、不好处理的情况：数组开始部分若干元素相等————因为相等的元素不改变flag，所以用flag初值进行判断
 * */
class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        //处理特殊情况：nums.size()==1和nums.size()==0。
        if(nums.empty() || nums.size() == 1)return nums.size(); 
        
        int cnt = 0;    //计数器
        int flag = 0;   //标识符；用于记录上个摆动的符号；只关注符号。
        
        //先处理前两个元素
        if(nums[1] != nums[0]){
            cnt = 2;
            flag = nums[1] - nums[0];
        }else
            cnt = 1;
        
        for(unsigned i = 2; i < nums.size(); ++i){
            if(flag == 0){  //节点i之前的元素全部相等；节点i之前--不--存在摆动
                if(nums[i] != nums[i-1]){   //nums[i] != nums[i-1
                    cnt++;  //摆动+1
                    flag = nums[i] - nums[i-1]; //  记录符号
                }
            }else{  //节点i之前存在摆动
                if(flag * (nums[i] - nums[i-1]) < 0){   //摆动方向与上一次摆动相反
                    cnt++;  //摆动+1
                    flag = (nums[i] - nums[i-1]);   //更新符号
                }
            }
        }
        
        return cnt;
    }
};
