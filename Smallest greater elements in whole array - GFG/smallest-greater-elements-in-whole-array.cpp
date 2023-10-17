//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int* greaterElement(int arr[], int n);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int *b;
        b = greaterElement(arr, n);
        for(int i=0;i<n;i++){
            if(b[i] == -10000000)
                cout << "_ ";
            else
                cout << b[i] << " ";
        }
        cout<<endl;   
        
    }
    return 0;
}

// } Driver Code Ends

int binarySearch(vector<int> arr, int target){
    int st = 0, e = arr.size()-1; 
    while(st <= e){
        int mid = st + (e-st)/2;
        if(arr[mid] == target) return mid; 
        else if(arr[mid] > target) e = mid-1; 
        else st = mid+1; 
    }
    
    return -1; 
}


int* greaterElement(int arr[], int n)
{
    // Complete the function
    vector<int> sorted(arr, arr+n);  
    sort(sorted.begin(), sorted.end()); 
    
    for(int i = 0; i<n; i++){
        int target = arr[i]; 
        int j = binarySearch(sorted, target); 
        // if(target == 20) cout << j<<endl;
        if(j == n-1){
            arr[i] = -10000000;
        }
        else{
            int counter = 1; 
            if(j+counter >= n || sorted[j]==sorted[n-1]){
                arr[i] = -10000000;
                continue;
            } 
            while((j+counter < n) && (sorted[j+counter] == arr[i])) counter++;
            arr[i] = sorted[j+counter]; 
        }
    }
    
    return arr; 
}
