#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;

    if (argc < 2 || argc > 2)
        return(write(1, "\n", 1));
    i = ft_strlen(argv[1]) - 1;
    k = 0;
    while (argv[1][i] == ' ' || argv[1][i] == '\t')
        i--;
    j = i;
    while (argv[1][i] != ' ' && argv[1][i] != '\t' && i != 0)
    {
        i--;
        k++;
    }
    i = i + 1;
    while (k >= 2 && i <= j)
    {
        write(1, &argv[1][i], 1);
        i++;   
    }
}