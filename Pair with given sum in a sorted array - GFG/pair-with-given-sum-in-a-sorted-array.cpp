//{ Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        // Complete the function
        int count = 0;
        int st = 0, e = n-1; 
        while(st < e){
            if(arr[st] + arr[e] == sum){
                count++;
                st++;
            }else if(arr[st] + arr[e] > sum){
                e--;
            }else{
                st++; 
            }
        }
        
        if(count == 0){
            return -1; 
        }
        
        return count; 
    
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends