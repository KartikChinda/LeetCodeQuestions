//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    
    bool isValid(int arr[], int n, int k, int mx){
        int student = 1; 
        int sumPages = 0; 
        for(int i = 0; i<n; i++){
            sumPages += arr[i]; 
            if(sumPages > mx){
                student++;
                sumPages = arr[i]; 
            }
            if(student > k) return false;
        }
        
        return true; 
        
    }
    
    
    int findPages(int arr[], int N, int M) 
    {
        //code here
        if(N < M) return -1; 
        int st, e, res = -1; 
        int maxArr = 0, sumArr = 0;
        
        for(int i = 0; i<N; i++){
            sumArr += arr[i];
            maxArr = max(maxArr, arr[i]); 
        }
        
        st = maxArr; 
        e = sumArr; 
        
        while(st <= e){
            int mid = st + (e-st)/2; 
            if(isValid(arr, N, M, mid)){
                res = mid; 
                e = mid-1; 
            }else{
                st = mid+1; 
            }
        }
        
        return res; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends