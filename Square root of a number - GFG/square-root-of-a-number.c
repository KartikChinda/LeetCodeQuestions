// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
    // Your code goes here
    long long int s = 0, e = x, ans = -1;
    while (s<=e){
        long long int mid = s + (e-s)/2;
        if(mid*mid == x) return mid;
        else if(mid*mid > x) e = mid-1;
        else{
            ans = mid;
            s = mid+1;
        }
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends