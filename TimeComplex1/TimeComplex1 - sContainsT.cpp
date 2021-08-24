bool checkSequence(string a, string b)
{

    if (b.length() == 0)
    {
        return true;
    }

    if (a.length() == 0)
    {
        return false;
    }

    if (a[0] == b[0])
    {
        a = a.substr(1);
        b = b.substr(1);
    }
    else
    {
        a = a.substr(1);
    }

    bool ans = checkSequence(a, b);

    return ans;
}
