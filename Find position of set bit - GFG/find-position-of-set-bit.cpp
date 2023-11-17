//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        // code here
        if(N == 0) return -1; 
        int setBitChecker = 0; 
        while(N != 1){
            if(N%2 != 0){
                return -1; 
            }
            setBitChecker++; 
            N = N/2; 
        }
        return setBitChecker+1; 
        // if(N==0)return -1;
        // if((N&N-1)==0)return log2(N)+1;
        // return -1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends