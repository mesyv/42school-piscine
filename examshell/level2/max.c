#include <stdio.h>

int max(int* tab, unsigned int len)
{
    int ret;
    unsigned int i;

    while (len == 0)
        return (0);
    i = 1;
    while (i < len)
    {
        if (tab[0] < tab[i])
            tab[0] = tab[i];
        i++;
    }
    return (tab[0]);
}

int main(void)
{
    int t[4];

    t[0] = 10;
    t[1] = 3;
    t[2] = 15;
    t[3] = 7;
    printf("Biggest: %d", max(t, 4));
}