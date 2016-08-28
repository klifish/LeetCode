class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> tmp = nums;
        
        int n = nums.size();
        
        int k = (n+1)/2;  //中间元素
        int j = n;
        //排序
        sort(tmp.begin(),tmp.end());
        for(int i = 0; i < n; ++i){
            nums[i] = (i % 2 == 0) ? tmp[--k] : tmp[--j];
        }
    }
};

/**
 * 能够完成摆动序列，但是不合题意，题目中要求第一个数小于第二个
 * 
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        int i = (n - 1) / 2;
        int j = (n + 1) / 2;
        
        while(j < n){
            swap(nums[i],nums[j]);
            i -= 2;
            j +=2;
        }
    }
};
 * */
