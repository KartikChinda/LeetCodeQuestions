// { Driver Code Starts


#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
		
	int first(int arr[], int n, int x){
	    int s = 0;
	    int e = n-1;
	    int ans = -1;
	    while(s<=e){
	        int mid = s+(e-s)/2;
	        if(x>arr[mid]) s = mid+1;
	        else if(x<arr[mid]) e = mid-1;
	        else{
	            ans = mid;
	            e = mid-1;
	        }
	        
	    }
	      return ans;
	}
	
	int last(int arr[], int n, int x){
	    int s = 0;
	    int e = n-1;
	    int ans = -1;
	    while(s<=e){
	        int mid = s+(e-s)/2;
	        if(x>arr[mid]) s = mid+1;
	        else if(x<arr[mid]) e = mid-1;
	        else{
	            ans = mid;
	            s=mid+1;
	        }
	        
	    }
	      return ans;
	}
	
	int count(int arr[], int n, int x) {
	    // code here
	    int s = first(arr, n, x);
	    if(s == -1) return 0;
	    int l = last(arr, n, x);
	    int res = l-s+1;
	    return res;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends