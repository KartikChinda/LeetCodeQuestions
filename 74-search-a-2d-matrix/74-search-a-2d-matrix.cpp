class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = 0, cols = matrix[0].size();
        if(target < matrix[0][0]) return false;
        if(target > matrix[matrix.size()-1][cols-1]) return false;
        
        while(rows < matrix.size() && cols-1 >= 0){
            if(target == matrix[rows][cols-1]) return true;
            else if(target < matrix[rows][cols-1]){
                cols--;
            }
            else{
                rows++;
            }
        }
        
        return false;
    }
};