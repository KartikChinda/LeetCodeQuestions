//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    class TrieNode{
        public: 
            TrieNode* child[26]; 
            bool isEnd;
            int counter;
        
            TrieNode(){
                for(int i = 0; i<26; i++){
                    child[i] = NULL;
                }
                isEnd = false; 
                counter = 0; 
                
            }
            
            void insert(TrieNode* root, string s){
                TrieNode* curr = root; 
                for(int i = 0; i<s.length(); i++){
                    int index = s[i]-'a';
                    if(curr->child[index] == NULL){
                        curr->child[index] = new TrieNode(); 
                    }
                    curr->counter++; 
                    curr = curr->child[index];
                    
                }
                curr->isEnd = true; 
            }
            
            bool hasOneChild(TrieNode* curr){
                int counter = 0; 
                for(int i = 0; i<26; i++){
                    if(curr->child[i] != NULL) counter++;
                }
                
                if(counter == 1) return true; 
                return false; 
            }
            
            
            string findPrefix(TrieNode* root, string s){
                string ans = ""; 
                TrieNode* curr = root;
                
                for(int i = 0; i<s.length(); i++){
                    int index = s[i] - 'a'; 
                    ans += s[i]; 
                    if((curr->child[index]->counter == 1) && (hasOneChild(curr->child[index]))){
                        return ans; 
                    }else{
                        curr = curr->child[index];
                    }
                }
                
                
                return ans; 
            }
            
            
    };
    
    
    vector<string> findPrefixes(string arr[], int n)
    {
        //code here
        TrieNode* root = new TrieNode(); 
        for(int i = 0; i<n; i++){
            root->insert(root, arr[i]); 
        }
        
        vector<string> res; 
        for(int i = 0; i<n; i++){
            string str = root->findPrefix(root, arr[i]); 
            res.push_back(str); 
        }
        
        return res; 
    }
    
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
            
        Solution ob;
        vector<string> ans = ob.findPrefixes(arr, n);
        
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] <<" ";


        cout << "\n";

    }

    return 0;
}

// } Driver Code Ends