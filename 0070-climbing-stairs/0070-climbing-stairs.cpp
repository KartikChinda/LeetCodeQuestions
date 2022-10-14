class Solution {
public:
    int climbStairs(int n) {
        // if(n<=2) return n;
        // return climbStairs(n-1) + climbStairs(n-2);
        int c, a = 1, b = 1; 
        for(int i = 2; i<=n; i++){
            c = a+b;
            a = b; 
            b = c;
            
        }
        
        return b; 
    }
};