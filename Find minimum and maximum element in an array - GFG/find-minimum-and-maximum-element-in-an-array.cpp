//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long arr[], int n) {
    long long maxE = arr[0];
    long long minE = arr[0];
    
    for(int i = 1; i<n; i++){
        if(arr[i] > maxE) maxE = arr[i];
        if(arr[i] < minE) minE = arr[i];
    }
    
    return {minE, maxE}; 
}