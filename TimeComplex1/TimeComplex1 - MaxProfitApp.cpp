int maximumProfit(int budget[], int n)
{

    int ans = INT_MIN;
    sort(budget, budget + n);
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, budget[i] * (n - i));
    }
    return ans;
}
