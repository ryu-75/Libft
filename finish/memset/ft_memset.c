#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memset(void *s, int c , unsigned int n)
{
    unsigned int    i;
    char            *str;
    
    str = (char *)s;
    i = 0;
    while (n != i)
    {
        str[i] = c;
        ++i;
    }
    return (s);
}   