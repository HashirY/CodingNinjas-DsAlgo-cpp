long staircase(int n)
{
	//Write your code here
    long *dp = new long[n+1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    
    for(int i=3;i<=n;i++){
        
        dp[i] = dp[i-1] + dp[i - 2] + dp[i - 3];
    }
    
    return dp[n];
}
