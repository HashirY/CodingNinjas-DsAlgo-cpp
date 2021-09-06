
int balancedBTsdp(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    int mod = (int)(pow(10, 9)) + 7;
    int *dp = new int[n + 1];

    dp[0] = dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {

        long long int temp1 = dp[i - 1] * dp[i - 1];
        temp1 = temp1 % mod;

        long long int temp2 = 2 * dp[i - 1] * dp[i - 2];
        temp2 = temp2 % mod;

        dp[i] = (temp1 + temp2) % mod;

        // dp[i] = ((long)dp[i - 1] * ((2 * (long)dp[i - 2]) % mod + dp[i - 1]) % mod) % mod;
    }

    return dp[n];
}
//-----------------------------------------------------------------------Recursive---------------------------------------------------------------//
#include<cmath>
int balancedBTs(int n) {
    // Write your code here
    if(n<=1){
        return 1;
    }
    
    int x = balancedBTs(n - 1);
    int y = balancedBTs(n - 2);
    int mod = (int) (pow(10 , 9)) + 7;
    
    // int ans = x*x + 2*x*y;
    int temp1 = (int)(((long)(x) * x) % mod);
    int temp2 = (int)((2 * (long)(x) * y) % mod);
    
    int ans = (temp1 + temp2) % mod;

    
    return ans;
}
