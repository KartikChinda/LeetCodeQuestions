// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int first(int arr[], int n){
    int s = 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]>0){
            s = mid+1;
        }
        else if(arr[mid]<0){
            e = mid-1;
        }
        else{
            ans = mid;
            e = mid-1;
        }
    }
}

int countZeroes(int arr[], int n) {
    // code here
    int s = first(arr, n);
    if(s == -1) return 0;
    return n-s;
}

// { Driver Code Starts.

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);;
        }
        
        int ans = countZeroes(arr, n);
        printf("%d\n", ans);
    }
    return 0;
}
  // } Driver Code Ends