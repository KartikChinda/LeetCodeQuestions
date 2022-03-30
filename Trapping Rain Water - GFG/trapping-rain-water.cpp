// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long res = 0;
        int *lm = new int[n];
        int *rm = new int[n];
        
        int left = arr[0];
        lm[0] = arr[0];
        for(int i = 1; i< n; i++){
            if(arr[i] > left) left = arr[i];
            lm[i] = left;
        }
        
        rm[n-1] = arr[n-1];
        int right = arr[n-1];
        for(int i = n-1; i>=0;i--){
            if(arr[i] > right) right = arr[i];
            rm[i] = right;
        }
        
        for(int i = 1; i<n-1; i++){
            res += std::min(lm[i], rm[i]) - arr[i];
        }
        
        return res;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends