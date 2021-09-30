#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int k;

    i = 0;
    k = 0;
    if (argc < 2 || argc > 2)
        return(write(1, "\n", 1));
    while (argv[1][i] == ' ' || argv[1][i] == '\t')
        i++;
    j = i;
    while ((argv[1][j] >= 'a' && argv[1][j] <= 'z') || (argv[1][j] >= 'A' && argv[1][j] <= 'Z'))
    {
        j++;
        k++;
    }
    while (k >= 2 && argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
    {
        write(1, &argv[1][i], 1);
        i++;   
    }
    write(1, "\n", 1);
}