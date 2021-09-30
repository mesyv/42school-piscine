#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
        i++;
    return(i);
}

char *ft_strdup(char *src)
{
    char *ret;
    int i;

    i = 0;
    ret = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (ret == 0)
        return (NULL);
    while (src[i] != '\0')
    {
        ret[i] = src[i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}

int main(void)
{
    char a[] = "abcdbasdasdasdsdd";

    printf("My: %s\n", ft_strdup(a));
    printf("--: %s\n", strdup(a));
}