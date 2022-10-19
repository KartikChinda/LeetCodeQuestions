
int dp[501][501]; 

int solve(int i, int j, int arr[])
{
    if (i >= j)
        return 0;

    if (dp[i][j] != 0)
        return dp[i][j];

    int ans = INT_MAX;
    for (int k = i; k < j; k++)
    {
        int tempAns = solve(i, k, arr) + solve(k + 1, j, arr) + arr[i - 1] * arr[k] * arr[j];

        if (tempAns < ans)
        {
            ans = tempAns;
        }
    }

    dp[i][j] = ans;
    return ans;
}

int minScoreTriangulation(int* values, int valuesSize){
    for (int i = 0; i < 500; i++)
    {
        for (int j = 0; j < 500; j++)
        {
            dp[i][j] = 0;
        }
    }
    
    return solve(1, valuesSize-1, values); 
}