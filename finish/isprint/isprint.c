int     ft_isprint(int c)
{
    while (c >= 32 && c <= 127)
    {
        return (1);
        c++;
    }
    return (0);
}