class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> lm;
        vector<int> rm;
        int left = height[0];
        int right = height[height.size()-1];
        
        lm.push_back(left);
        for(int i = 1; i<height.size();i++){
            if(height[i]>left) left = height[i];
            lm.push_back(left);
        }
        
        for(int i = height.size()-1; i>=0;i--){
            if(height[i]>right) right = height[i];
            rm.insert(rm.begin(), right);
        }
        
        int sum = 0;
        for(int i = 1; i<height.size()-1; i++){
            sum += (std::min(lm[i], rm[i]) - height[i]);
        }
        
        return sum;
    }
};