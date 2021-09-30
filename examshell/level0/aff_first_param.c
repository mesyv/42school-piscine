#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 1;
    if (argc < 2)
    {
        return(write(1, "\n", 1));
    }
    while (argv[1][i] != '\0')
    {
        write(1, &argv[j][i], 1);
        i++;
    }
}