#include <bits/stdc++.h>
using namespace std;

void printcode(vector<string> output)
{

    for (int i = 0; i < output.size(); i++)
    {
        cout << (output[i]) << endl;
    }
}

char getChar(int n)
{

    return (char)(n + 96);
}

vector<string> getcode(string s)
{

    if (s.size() == 0)
    {
        vector<string> ans;
        ans.push_back("");
        return ans;
    }

    vector<string> output1 = getcode(s.substr(1)); //1 digit
    vector<string> output2(0);                     // 2digit

    int firstdigit = (s[0] - '0');
    int firsttwodigit = 0;

    if (s.size() >= 2)
    {

        firsttwodigit = (s[0] - '0') * 10 + (s[1] - '0');

        if (firsttwodigit >= 10 && firsttwodigit <= 26)
        {
            output2 = getcode(s.substr(2));
        }
    }

    vector<string> output(output1.size() + output2.size());

    int k = 0;
    for (int i = 0; i < output1.size(); i++)
    {

        char ch = getChar(firstdigit);
        output[k] = ch + output1[i];
        k++;
    }

    for (int i = 0; i < output2.size(); i++)
    {

        char ch = getChar(firsttwodigit);
        output[k] = ch + output2[i];
        k++;
    }

    return output;
}

void printCode(string s)
{

    vector<string> output = getcode(s);

    printcode(output);
}

int main()
{
    string s;
    cin >> s;

    printCode(s);
    return 0;
}
