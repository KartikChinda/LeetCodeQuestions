//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
public:
        class TrieNode
    {
        public:
            TrieNode* children[26];
            bool is_leaf;
            
            TrieNode()
            {
                for(int i=0;i<26;i++)
                {
                    children[i]=NULL;
                }
                is_leaf=false;
            }
    };
    
    void insert(TrieNode* root,string key)
    {
        for(auto i:key)
        {
            int idx=i-'a';
            if(!root->children[idx])
            {
                TrieNode* curr=new TrieNode();
                root->children[idx]=curr;
            }
            root=root->children[idx];
        }
        root->is_leaf=true;
    }
    
    bool search(TrieNode* root,string key)
    {
        if(key.length()==0)////////////////////////////////
        {
            return true;
        }
        for(auto i:key)
        {
            int idx=i-'a';
            if(!root->children[idx])
            {
                return false;
            }
            root=root->children[idx];
        }
        return root&&root->is_leaf;
    }
    bool solve(TrieNode* root,string s)
    {
        int n=s.length();
        if(n==0)
        {
            return true;
        }
        
        for(int i=1;i<=n;i++)
        {
            string left=s.substr(0,i);///////////////////////
            string right=s.substr(i);
            //cout<<left<<"  "<<right<<endl;
            bool left_search=search(root,left);
            bool right_search=search(root,right);
            if(left_search&&right_search)
            {
                return true;
            }
            else if(left_search)
            {
                if(solve(root,right))
                {
                    return true;
                }
            }
        }
        return false;
    }
    int wordBreak(string A, vector<string> &B) {
        //code here
        
        TrieNode* root=new TrieNode();
        for(auto i:B)
        {
            insert(root,i);
        }
        
        return solve(root,A);
    }

};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
}

// } Driver Code Ends