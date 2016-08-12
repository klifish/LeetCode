class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 0){
            return (vector<vector<int>>)0;
        }
        
        vector<int> tmp1 = {1};
        vector<vector<int>> tmp_all = {tmp1};
        
        for(int i = 1;i < numRows;++i){
            vector<int> tmp;
            tmp.push_back(1);
            for(int j = 0;j < i-1;++j){
                tmp.push_back(tmp_all[i-1][j]+tmp_all[i-1][j+1]);
            }
            tmp.push_back(1);
            tmp_all.push_back(tmp);
        }
        
        return tmp_all;
    }
};
