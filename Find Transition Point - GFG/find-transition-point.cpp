//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends




void firstOccuranceOf1(int arr[], int n, int st, int e){
    
    
    
}

int transitionPoint(int arr[], int n) {
    // code here
    if(n == 1 && arr[0] == 0) return -1; 
    int res = -1; 
    int st = 0, e = n-1; 
    while (st <= e){
        int mid = st + (e-st)/2;
        
        if(arr[mid] == 1){
            res = mid; 
            e = mid-1;
        }else if (arr[mid] == 0){
            st = mid + 1; 
        }else{
            e = mid-1; 
        }
    }
    
    
    return res; 
}