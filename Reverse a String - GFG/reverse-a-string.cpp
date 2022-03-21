// { Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

void reverse(string &ans, int s, int e){
    if(s>e) return;
    char temp = ans[s];
    ans[s] = ans[e];
    ans[e] = temp;
    reverse(ans, s+1, e-1);
}

string reverseWord(string str){
    
    int s = 0;
    int e = str.length()-1;
    string ans = str;
    reverse(ans, s, e);
    
    return ans;
    
  //Your code here
}