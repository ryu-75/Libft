#include <string.h>
#include <stdio.h>

void    *ft_memcpy (void *dest, const void *src, unsigned int n)
{
    char   *d;
    const char   *s;

    d = dest;
    s = src;
    while (n--)
        *d++ = *s++;
    return (dest);
}