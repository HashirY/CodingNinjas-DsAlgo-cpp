int firstIndex(int arr[], int n, int x)
{

    if (n == 0)
    {
        return -1;
    }

    if (arr[0] == x)
    {
        return 0;
    }

    int index = firstIndex(arr + 1, n - 1, x);

    if (index != -1)
    {
        return index + 1;
    }

    else
    {
        return -1;
    }
}
