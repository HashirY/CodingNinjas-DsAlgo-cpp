int countZeros(int n)
{

    if (n == 0)
    {
        return 1;
    }

    else if (n != 0 && n < 10)
    {
        return 0;
    }

    else
    {

        int d = n % 10;
        if (d == 0)
        {
            return 1 + countZeros(n / 10);
        }

        else
        {
            return countZeros(n / 10);
        }
    }
}
