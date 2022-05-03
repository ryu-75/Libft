#include <stdio.h>
#include <string.h>

char    *ft_strchr (const char *p, int c)
{
    char    ch;

    ch = c;
    while (*p)
    {
        if (*p == ch)
            return ((char *)p);
        else if (*p == '\0')
            return (NULL);
        p++;
    }
    return ((char *)p);
}