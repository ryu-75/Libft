int     ft_isdigit(unsigned char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            return (1);
        i++;
    }
    return (0);
}