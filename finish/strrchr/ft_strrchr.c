#include <string.h>
#include <stdio.h>

char    *ft_strrchr (const char *s, int c)
{
    char    *tmp;
    char    ch;

    tmp = NULL;
    ch = c;
    while (*s)
    {
        if (*s == ch)
            tmp = (char *)s;
        if (*s == '\0') 
            return (tmp);
        s++;
    }
    if (*tmp != '\0')
        return (tmp);
    return (NULL);
}