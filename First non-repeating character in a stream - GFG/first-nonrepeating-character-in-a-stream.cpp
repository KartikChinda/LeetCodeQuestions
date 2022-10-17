//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    string ans = ""; 
		    unordered_map<char, int> counter; 
		    queue<char> q; 
		    
		    for(int i = 0; i< A.length(); i++){
		        char ch = A[i];
		        counter[ch]++;
		        q.push(ch); 
		        while(!q.empty()){
		            char checker = q.front();
		            if(counter[checker] > 1) q.pop();
		            else{
		                ans+=checker;
		                break;
		            }
		        }
		        if(q.empty()) ans += '#';
		    }
		    
		    return ans; 
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends