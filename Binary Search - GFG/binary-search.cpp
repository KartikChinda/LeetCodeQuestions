// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:

    
    int util(int a[], int k, int s, int e){
        if(s>e) return -1;
        int mid = (s+e)/2;
        if(a[mid] == k) return mid;
        if(a[mid]>k) return util(a, k, s, mid-1);
        else return util(a, k, mid+1, e);
    }

    int binarysearch(int arr[], int n, int k){
        // code here
        int s = 0;
        int e = n-1;
        return util(arr, k, s, e);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        int found = ob.binarysearch(arr,N,key);
        cout<<found<<endl;
    }
}

  // } Driver Code Ends