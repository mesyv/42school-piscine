#include <unistd.h>

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
    int len;

    if (argc < 2 || argc > 2)
        return(write(1, "\n", 1));
    len = ft_strlen(argv[1]);
    while (len >= 0)
    {
        write(1, &argv[1][len], 1);
        len--;
    }
    write(1, "\n", 1);
}