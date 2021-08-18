#include <bits/stdc++.h>
using namespace std;

// input - input array
// size - length of input array
// element - value to be searched

int binarySearchHelper(int input[], int l, int r, int x)
{

    if (l > r)
    {
        return -1;
    }

    int mid = l + (r - l) / 2;

    if (input[mid] == x)
    {
        return mid;
    }

    if (input[mid] > x)
    {
        return binarySearchHelper(input, l, mid - 1, x);
    }

    else if (input[mid] < x)
    {
        return binarySearchHelper(input, mid + 1, r, x);
    }
}

int binarySearch(int input[], int size, int element)
{
    // Write your code here
    return binarySearchHelper(input, 0, size - 1, element);
}

int main()
{
    return 0;
}
