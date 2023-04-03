//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int ans1 = 0, ans2 = 0, x = 0; 
        vector<int> res; 
        for(int i = 0; i<nums.size(); i++) x ^= nums[i];
        
        int lastSet = (x & ~(x-1));
        for(int i = 0; i<nums.size(); i++){
            if((nums[i] & lastSet) == 0) ans1 ^= nums[i];
            else ans2 ^= nums[i];
        }
        
        if(ans1 > ans2){
            res.push_back(ans2);
            res.push_back(ans1);
        }else{
            res.push_back(ans1);
            res.push_back(ans2);
        }
        
        return res; 
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends