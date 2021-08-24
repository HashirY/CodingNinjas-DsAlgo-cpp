#include <bits/stdc++.h>
using namespace std;

void printsubset(int input[], int start, int n, int output[], int osize)
{

    if (start == n)
    {
        for (int i = 0; i < osize; i++)
        {
            cout << output[i] << " ";
        }

        cout << endl;
        return;
    }

    int smalloutput[40];

    printsubset(input, start + 1, n, output, osize); // we are not picking 1
    int i = 0;
    for (i = 0; i < osize; i++)
    {
        smalloutput[i] = output[i]; // pehle ek nye output m daala pehle waale output ka datat
    }
    smalloutput[i] = input[start]; // 1 tha use end m add kr dia

    printsubset(input, start + 1, n, smalloutput, osize + 1); // as we hvae added to increase lrdenge arr ka size
}

int main()
{
    return 0;
}
