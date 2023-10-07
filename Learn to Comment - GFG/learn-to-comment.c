//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>


// } Driver Code Ends
//User function Template for C

//Comment the part that outputs b
void comment(int a,int b,int c)
{
    printf("%d \n", a);
    // printf("%d \n", b);
    printf("%d \n", c);
}

//{ Driver Code Starts.
 
int main()
{
   
    int t;
    scanf("%d", &t);
    
    while(t--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        
        //function call
        comment(a, b, c);
    }
    
    return 0;
} 
// } Driver Code Ends