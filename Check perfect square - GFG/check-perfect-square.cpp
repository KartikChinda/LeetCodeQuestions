//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    
    long long int isPerfectSquare(long long int n){
        // code here
        long long int st = 0, e = n; 
        while(st <=e){
            long long int mid = st + (e-st)/2; 
            if(mid*mid == n) return 1; 
            if(mid*mid > n) e = mid-1; 
            else{
                st = mid+1; 
            }
        }
        
        return 0; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.isPerfectSquare(n) << endl;
    }
    return 0;
}

// } Driver Code Ends