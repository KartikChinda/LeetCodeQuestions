// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    
    
    
    int firstBadVersion(int n) {
        int s = 0; 
        int e = n;
        int ans = 0; 
        while(s<=e){
            int mid = s + (e-s)/2;
            if(isBadVersion(mid) == false){
                s = mid+1;
            }else if(isBadVersion(mid) == true){
                ans = mid;
                e = mid-1;
            }
        }
        
        return ans;
    }
};