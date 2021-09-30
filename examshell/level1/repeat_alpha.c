#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int count;

    if (argc < 2 || argc > 2)
        return(write(1, "\n", 1));
    i = 0;
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            j = 0;
            count = argv[1][i] - 'a';
            while (j <= count)
            {
                write(1, &argv[1][i], 1);
                j++;
            }
        }
        if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            j = 0;
            count = argv[1][i] - 'A';
            while (j <= count)
            {
                write(1, &argv[1][i], 1);
                j++;
            }
        }
        else
        {
            write(1, &argv[1][i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
}