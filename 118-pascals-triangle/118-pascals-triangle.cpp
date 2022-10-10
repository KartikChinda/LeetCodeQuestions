class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> v1;
        v1.push_back(1);
        ans.push_back(v1);
        if(numRows == 1){
            return ans;
        }
        v1.clear();
        v1.push_back(1);
        v1.push_back(1);
        ans.push_back(v1);
        if(numRows == 2){
            return ans;
        }
        vector<int> temp(2,1);
        for(int i=3;i<=numRows;i++){
            vector<int> v;
            v.push_back(1);
            for(int i=0;i<temp.size()-1;i++){
                v.push_back(temp[i] + temp[i+1]);
            }
            v.push_back(1);
            temp = v;
            ans.push_back(v);
        }
        return ans;
    }
};