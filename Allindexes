int allindexesRecursive(int arr[], int n, int x, int output[])
{

  First approach
    // if (n == 0)
    // {
    //     return 0;
    // }

    // int smallans = allindexesRecursive(arr + 1, n - 1, x, output);

    // if (arr[0] == x)
    // {

    //     for (int i = smallans; i >= 0; i--)
    //     {
    //         output[i + 1] = output[i] + 1;
    //     }

    //     output[0] = 0;
    //     return smallans + 1;
    // }

    // else
    // {
    //     for (int i = smallans; i >= 0; i--)
    //     {
    //         output[i] = output[i] + 1;
    //     }

    //     return smallans;
    // }

  second approach
    if (n == 0)
    {
        return 0;
    }

    int ans = allindexesRecursive(arr, n - 1, x, output);

    if (arr[n - 1] == x)
    {

        output[ans] = n - 1;
        return ans + 1;
    }

    else
    {
        return ans;
    }
}
