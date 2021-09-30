#include <unistd.h>

int ft_verify(char *str, char c, int i)
{
    int z;

    z = 0;
    while (z < i)
    {
        if (str[z] == c)
            return (1);
        z++;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc < 3 || argc > 3)
        return(write(1, "\n", 1));
    i = 0;
    while (argv[1][i] != '\0')
    {
        j = 0;
        while (argv[2][j] != '\0')
        {
            if (ft_verify(argv[1], argv[1][i], i) == 0 && argv[1][i] == argv[2][j])
            {
                write(1, &argv[1][i], 1);
                break;
            }
            j++;
        }
        i++;
    }
    write(1, "\n", 1);
}