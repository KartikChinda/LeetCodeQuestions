//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        // We use moore's voting algorithm for this question
        int count = 1; 
        int el = a[0]; 
        for(int i = 1; i<size; i++){
            if(count == 0){
                count = 1; 
                el = a[i]; 
            }else if(a[i] == el) count++; 
            else count--; 
        }
        
        int checker = 0; 
        
        for(int i = 0; i<size; i++){
            if(a[i] == el) checker++; 
        }
        
        if(checker > size/2) return el; 
        return -1; 
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends