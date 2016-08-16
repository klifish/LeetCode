/**
 * 16/8
 * 题目地址：https://leetcode.com/problems/gas-station/
 * 解题过程小结：
 * *************到目前为止，这道题是花时间最久，结果还没解出来的题
 * *************解题时，思路逐渐发散开来，朝着目标一点一点逼近；可是，就是无法达成目标，如同与正确答案之间隔着一层窗户纸，
 * *************怎么也捅不破！
 * *************借鉴他人的方案，再与自己的思路进行比较，发现思路的方向是正确的，而一直没能得出正确结果，
 * *************让人略微有些焦躁，失去了冷静的判断（老毛病了）。
 * *************这或许是因为一直在权衡时间，效率等事情。
 * */
 /**
  * 解题思路小结：
  * （注释）
  * total用于判断路环上gas储量是否大于循环绕圈行驶的总消耗量；
  * 
  * 起点在节点0，gasRemain为0，更新gasRemain；
  * 处理节点i：假设能够从某个节点j（j在i之前）到达节点i-1，判断能否由节点i-1到达节点i，
  *            通过到达i-1时的gasremain以及gas[i] - cost[i]之和判断
  *                 若无法到达i，则把i作为起点，同时更新gasRemain，用以下个节点判断是否可以到达
  *                 若能够到达i，则累加gasRemain
  * */
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int start = 0;  //候选起点
        int gasRemain = 0;  //剩余gas
        int total = 0;  //用以判断是否可以循环行驶；所有gas station的gas总和  与  汽车行驶一圈消耗的gas总和之差
        
        for(int i = 0; i < gas.size(); ++i){
            total += (gas[i] - cost[i]);    
            if(gasRemain < 0){  //到达不了节点i
                gasRemain = gas[i] - cost[i];   //更新gasRemain
                start = i;  //更新起点
            }else{  //到达节点i
                gasRemain +=  gas[i] - cost[i]; //更新gasRemain
            }
        }
        /**
         * 循环结束之后，得到total，判断是否能够绕圈行驶
         * 同时，得到首个可以循环行驶的起点
         * */
        
        return total < 0 ? -1 : start;
    }
};

/**
 * 15/8:
 * 这道题折腾了两天，关键是卡在结束时的判决条件上。
 * 再有就是使用while循环。之前一直觉得while和for循环是等价的，这里在解题时，使用while感觉很别扭。应该研究下for和while的关系。
 * 值得肯定的是，随着思考的深入，逐渐也能获得好的解题思路
 * */
