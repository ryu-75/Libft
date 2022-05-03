int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

char     *ft_strcpy(char *dest, char *src)
{
    int     i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}


int     ft_strlcpy(char *s1, char *s2, int maxlen)
{
    int     i;
    int     len;

    ft_strcpy(s1, s2);
    len = ft_strlen(s1);
    return (len);
}

#include <stdio.h>
#include <string.h>

int     main (void)
{
    char    s1[20];
    char    *s2 = "bonjour";
    printf("%d\n", ft_strlcpy(s1, s2, 8));
}