class Solution {
public:
    
    double util(double x, int b){
        if(b == 0) return (double)1.0;
        if(b == 1) return x;
        double res = util(x, b/2);
        if(b%2 == 0){
            return res*res;
        }else{
            return x*res*res;
        }
    }
    
    double myPow(double x, int n) {
        int b = n;
        if(n<0){
            b = abs(b);
        }
        double ans = util(x, b);
        if(n<0){
            ans = (double)1.0/ans;
        }
        
        return ans;
        
    }
};