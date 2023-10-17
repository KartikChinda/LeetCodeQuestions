//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}
// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> arr, int x) {
    //code here
    int st = 0, e = arr.size()-1; 
    while(st <= e){
        int mid = st + (e-st)/2; 
        if(arr[mid] == x){
            return mid; 
        }
        if(arr[mid] > arr[st]){
            if(arr[mid] > x && arr[st] <= x) e = mid-1;
            else st = mid+1; 
        }else{
            if(arr[mid] < x && arr[e] >= x) st = mid+1; 
            else e = mid-1; 
        }
    }
    
    return -1; 
}