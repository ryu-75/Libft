int     ft_isalpha(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
            return (1);
        i++;
    }
    return (0);
}