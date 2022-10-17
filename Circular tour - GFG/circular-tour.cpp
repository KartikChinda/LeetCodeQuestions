//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


// } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
    //   This is an even quicker approach than the front and rear part, see babbar's video once if you cant get it. 
       int deficitTillIndex = 0; 
       int balance = 0;
       int start = 0; 
       for(int i = 0; i<n; i++){
           balance += p[i].petrol - p[i].distance; 
           if(balance < 0){
               deficitTillIndex += balance; 
               start = i+1; 
               balance = 0; 
           }
       }
       if(deficitTillIndex + balance >= 0) return start; 
       return -1; 
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}

// } Driver Code Ends