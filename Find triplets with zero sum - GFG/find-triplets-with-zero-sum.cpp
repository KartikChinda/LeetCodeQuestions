//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    
    bool findPair(int arr[], int st, int e, int sum){
        while(st <e){
            int curr = arr[st] + arr[e]; 
            if(curr == sum) return true; 
            if(curr > sum) e--; 
            if(curr < sum) st++; 
        }
        
        return false; 
    }
    
    bool findTriplets(int A[], int n)
    { 
        //Your code here
        sort(A, A+n);
        for(int i = 0; i<n; i++){
            if(findPair(A, i+1, n-1, 0-A[i])) return true; 
        }
        
        return false; 
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends