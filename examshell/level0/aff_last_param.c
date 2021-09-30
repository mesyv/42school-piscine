#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (argc < 2)
    {
        return(write(1, "\n", 1));
    }
    while (argv[j] != 0)
        j++;
    while (argv[j - 1][i] != '\0')
    {
        write(1, &argv[j - 1][i], 1);
        i++;
    }
}