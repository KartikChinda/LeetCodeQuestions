// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    void util(vector<int> nums, vector<int> &res, int s, int e){
        if(s<=e){
            int mid = s+(e-s)/2;
            res.push_back(nums[mid]);
            util(nums, res, s, mid-1);
            util(nums, res, mid+1, e);
        }
        return;
    }
    
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int> res;
        int s = 0;
        int e = nums.size()-1;
        util(nums, res, s, e);
        return res;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends