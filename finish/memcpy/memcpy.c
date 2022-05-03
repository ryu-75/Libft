#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

void    *memcpy(char *dst, char *src, int length)
{
    unsigned int     src_len;
    unsigned int     dst_len;
    int     size;

    size = length;
    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    if (length == 0 || dst == src)
        return (0);
    if (dst_len < src_len)
    {
        if (size != dst_len - 1 || length <= src_len)
            size = length;
        else
            size = src_len - size - 1;
        length -= size;
        while (src[i] != '\0')
            *dst++ = *src++;
    }
    else
    {
        src += length;
        dst += length;
        size = src_len;
        if (dst_len - 1)
        {
            if (dst_len - 1 || length <= src_len)
                size = length;
            else   
                size--;
            length -= size;
            while (src[i] != '\0')
                *dst-- = *src--;
        }
        size = length / src_len;*
        
    }
}