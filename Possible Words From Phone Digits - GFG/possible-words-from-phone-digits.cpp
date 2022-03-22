// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    
    void util(int a[], int n, string output, int index, vector<string> &res, string mapping[]){
        if(index>=n){
            res.push_back(output);
            return;
        }
        
        string value = mapping[a[index]];
        for(int i = 0; i<value.length();i++){
            output.push_back(value[i]);
            util(a, n, output, index+1, res, mapping);
            output.pop_back();
        }
    }
    
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string> res;
        string output = "";
        int index = 0;
        string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        util(a, N, output, index, res, mapping);
        
        return res;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends