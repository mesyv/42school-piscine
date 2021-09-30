#include <stdio.h>
#include <stdlib.h>

int ft_check(const char *str, int z)
{
    int x;
    int pm;

    pm = 0;
    x = z;
    while (str[x] != '\0' && str[x] == '-' || str[x] == '+')
        {
            pm++;
            x++;
        }
    printf("pm: %d\n", pm);
    if (pm > 1)
        return (1);
    if (str[z] != '-' && str[z] != '+' && str[z] <= '0' || str[z] >= '9')
        return (1);
    return (0);
}

int ft_atoi(const char *str)
{
    int i;
    int digit;
    int ret;
    int minus;

    minus = 1;
    i = 0;
    digit = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v')
        i++;
    if (ft_check(str, i) == 1)
        return (0);
    while (str[i] == '+')
        i++;
    while (str[i] == '-')
    {
        minus = -1;
        i++;
    }
    while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
    {
        if (digit == 0)
            ret = str[i] - '0';
        else
            ret = (ret * 10) + str[i] - '0';
        i++;
        digit++;
    }
    return (ret * minus);
}

int main(void)
{
    char a[] = "--1243";

    printf("My atoi: %d\n", ft_atoi(a));
    printf("-- Atoi: %d\n", atoi(a));
}