#include <bits/stdc++.h>
using namespace std;

bool isAB(string s)
{

    if (s.length() == 0)
    {
        return true;
    }

    if (s[0] == 'a')
    {

        if (s.substr(1).length() > 1 && s.substr(1, 3) == ("bb"))
        {
            return isAB(s.substr(3));
        }
        else
        {
            return isAB(s.substr(1));
        }
    }
    return false;
}

bool checkABUtil(char input[], int start)
{

    if (input[start] == '\0')
    {
        return true;
    }

    if (input[start] != 'a')
    {
        return false;
    }

    if (input[start + 1] != '\0' && input[start + 2] != '\0')
    {
        if (input[start + 1] == 'b' && input[start + 2] == 'b')
        {
            return checkABUtil(input, start + 3);
        }
    }

    return checkABUtil(input, start + 1);
}

bool checkAB(char input[])
{
    // Write your code here
    bool ans;
    ans = checkABUtil(input, 0);

    return ans;
}

int main()
{
    string s;
    cin >> s;

    cout << isAB(s);
    return 0;
}
