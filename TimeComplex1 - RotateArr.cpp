void rotator(int *arr, int start, int end)
{
    int i = start, j = end;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void rotatearray(int arr[], int n, int d)
{

    rotator(arr, 0, n - 1);
    rotator(arr, 0, n - d - 1);
    rotator(arr, n - d, n - 1);
}
