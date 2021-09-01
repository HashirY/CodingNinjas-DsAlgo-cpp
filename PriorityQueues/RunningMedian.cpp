#include <bits/stdc++.h>
using namespace std;

void median(int arr[], int n)
{

    priority_queue<int> maxheap;
    priority_queue<int, vector<int>, greater<int>> minheap;

    for (int i = 0; i < n; i++)
    {

        if (maxheap.size() && arr[i] > maxheap.top())
        {
            minheap.push(arr[i]);
        }

        else
        {
            maxheap.push(arr[i]);
        }

        if (abs((int)maxheap.size() - (int)minheap.size()) > 1)
        {

            if (maxheap.size() > minheap.size())
            {
                int temp = maxheap.top();
                maxheap.pop();
                minheap.push(temp);
            }

            else
            {
                int temp = minheap.top();
                minheap.pop();
                maxheap.push(temp);
            }
        }

        int median;

        int totalsize = minheap.size() + maxheap.size();

        if (totalsize % 2 == 1)
        {
            if (maxheap.size() > minheap.size())
            {
                median = maxheap.top();
            }

            else
            {
                median = minheap.top();
            }
        }

        else
        {

            median = 0;

            if (!maxheap.empty())
            {
                median = median + maxheap.top();
            }

            if (!minheap.empty())
            {
                median = median + minheap.top();
            }

            median = median / 2;
        }

        cout << median << " ";
    }
}

int main()
{
    int arr[] = {6, 2, 1, 3, 7, 5};
    int n = 6;

    median(arr, n);
    return 0;
}
