//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> res; 
		    int n = s.length(); 
		    int counter = pow(2, n); 
		    for(int i = 1; i<counter; i++){
		        string ans = ""; 
		        for(int j = 0; j<n; j++){
		            if(i & (1<<j)) ans += s[j]; 
		        }
		        res.push_back(ans); 
		    }
		    sort(res.begin(), res.end()); 
		    return res; 
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends