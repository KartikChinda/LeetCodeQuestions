class Solution {
public:
    
    void transpose(vector<vector<int>> &matrix){
        for(int i = 0; i<matrix.size();i++){
            for(int j = 0; j<matrix[i].size();j++){
                if(i<j){
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
        }
    }
    
    
    void rotate(vector<vector<int>>& matrix) {
        transpose(matrix);
        for(int i = 0; i<matrix.size();i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};