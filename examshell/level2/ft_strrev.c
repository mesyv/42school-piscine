#include <stdio.h>

int ft_strlen(char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
        i++;
    return(i);
}

char *ft_strrev(char *str)
{
    int i;
    int len;
    char z;

    i = 0;
    len = ft_strlen(str) - 1;
    while (i <= (ft_strlen(str) / 2) - 1)
    {
        z = str[i];
        str[i] = str[len];
        str[len] = z;
        len--;
        i++;
    }
    return (str);
}

int main(void)
{
    char a[] = "0123456789";
    char *st;

    st = ft_strrev(a);
    printf("%s\n", st);
}