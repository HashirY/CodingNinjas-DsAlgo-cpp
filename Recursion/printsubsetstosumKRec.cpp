#include <bits/stdc++.h>
using namespace std;

void printsubset(int input[], int si, int size, int output[], int osize, int k)
{

    if (si == size)
    {
        if (k == 0)
        {
            for (int i = 0; i < osize; i++)
            {
                cout << output[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    int smalloutput1[1000];

    printsubset(input, si + 1, size, output, osize, k);

    if (k > 0)
    {
        int i;
        for (i = 0; i < osize; i++)
        {
            smalloutput1[i] = output[i];
        }
        smalloutput1[i] = input[si];
        printsubset(input, si + 1, size, smalloutput1, osize + 1, k - input[si]);
    }
}

void printSubsetSumToK(int input[], int size, int k)
{
    // Write your code here
    int output[1000];
    printsubset(input, 0, size, output, 0, k);
}

int main()
{
    return 0;
}
