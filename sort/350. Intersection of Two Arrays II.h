/**
 * https://discuss.leetcode.com/topic/45893/c-hash-table-solution-and-sort-two-pointers-solution-with-time-and-space-complexity
 * 关联容器还是不熟悉
 * 解题思路很好理解
 * */

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m;
        vector<int> ret;
        /**
         * mapped_type& operator[] ( const key_type& k );
         * 
         * If k matches the key of an element in the container, the function returns a reference to its mapped value.
         * If k does not match the key of any element in the container, the function inserts a new element with that key and
         * returns a reference to its mapped value. Notice that this always increases the container size by one, even if 
         * no mapped value is assigned to the element (the element is constructed using its default constructor)
         * */
        for(auto i: nums1) ++m[i];
        
        for(auto i: nums2){
            if(m[i]-- > 0)
                ret.push_back(i);
        }
        
        return ret;
    }
};
