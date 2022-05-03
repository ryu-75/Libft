#include <string.h>
#include <stdio.h>
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

void    ft_bzero(void *s, unsigned int n)
{   
    memset((void *)s, 0, (unsigned int)n);
}