//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int minDaysToEmpty(long long int C, long long int l) {
        // code here
        
        long long i = 1; 
        long long int temp = C; 
        while(temp > 0){
            temp += l; 
            if(temp > C) temp = C; 
            temp -= i; 
            i++;
            
        }
        
        return i-1; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int c, l;
        cin >> c;
        cin >> l;
        Solution ob;
        cout << ob.minDaysToEmpty(c, l) << endl;
    }
    return 0;
}

// } Driver Code Ends