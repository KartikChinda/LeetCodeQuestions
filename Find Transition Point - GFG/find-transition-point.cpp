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


int soln = -1; 

void firstOccuranceOf1(int arr[], int n, int st, int e){
    
    while (st <= e){
        int mid = st + (e-st)/2;
        
        if(arr[mid] == 1){
            soln = mid; 
            e = mid-1;
        }else if (arr[mid] == 0){
            st = mid + 1; 
        }else{
            e = mid-1; 
        }
    }
    
}

int transitionPoint(int arr[], int n) {
    // code here
    if(n == 1 && arr[0] == 0) return -1; 
    soln = -1; 
    firstOccuranceOf1(arr, n, 0, n-1);
    return soln; 
}