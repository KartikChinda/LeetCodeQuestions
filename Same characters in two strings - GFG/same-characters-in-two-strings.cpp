//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include <cstring> 

class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        transform(A.begin(), A.end(), A.begin(), ::tolower); 
        transform(B.begin(), B.end(), B.begin(), ::tolower);;
        // B = tolower(B);
        int counter = 0; 
        int len = A.length() < B.length() ? A.length() : B.length(); 
        for(int i = 0; i<len; i++){
            if(A[i] == B[i]){
                counter++;
            }
        }
        
        return counter; 
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.sameChar(A,B)<<endl;
    }
    return 0;
}
// } Driver Code Ends