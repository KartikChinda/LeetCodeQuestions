// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    
    void util(stack<int> &s, int count, int size){
        // base case
        if(count == size/2){
            s.pop();
            return;
        }
        
        int temp = s.top();
        s.pop();
        util(s, count+1, size);
        s.push(temp);
        
        return;
    }
    
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int size)
    {
        // code here.. 
        int count = 0;
        util(s, count, size);
        
        return;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends