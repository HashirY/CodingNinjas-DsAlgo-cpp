int length(char input[])
{

    int len = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        len++;
    }

    return len;
}

void pairStarHelper(char input[], int start)
{

    if (input[start] == '\0')
    {
        return;
    }

    pairStarHelper(input, start + 1);

    if (input[start] == input[start + 1])
    {
        int len = length(input);
        input[len + 1] = '\0';

        int i;

        for (int i = len - 1; i >= start + 1; i--)
        {
            input[i + 1] = input[i];
        }

        input[start + 1] = '*';
    }
}

void pairStar(char input[])
{

    pairStarHelper(input, 0);
}
