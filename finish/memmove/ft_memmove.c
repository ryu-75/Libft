#include <stdio.h>
#include <string.h>

void    *ft_memmove (void *dest, const void *src, unsigned int n)
{
    char    *d;
    const char  *s;

    d = dest;
    s = src;
    if (d < s)
    {
        while (n--)
            *d++ = *s++;
    }
    else
    {
        char *lasts = (char*)s + (n-1);
        char *lastd = d + (n-1);
        while (n--)
            *lastd-- = *lasts--;
    }
    return (dest);
}