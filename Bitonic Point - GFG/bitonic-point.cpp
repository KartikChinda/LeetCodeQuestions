//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int st = 0, e = n-1; 
	    while(st <= e){
	        int mid = st + (e-st)/2; 
	        if((mid == 0 || arr[mid-1] < arr[mid]) && (mid == n-1 || arr[mid+1] < arr[mid])) return arr[mid];
	        else if (mid > 0 && arr[mid-1] > arr[mid]) e = mid - 1;
	        else st = mid+1; 
	    }
	    
	    return -1; 
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends