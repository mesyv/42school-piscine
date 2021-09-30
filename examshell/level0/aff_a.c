#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    if (argc < 2)
        return(write(1, "a", 1));
    while (argv[i] != 0)
    {
        j = 0;
        while (argv[i][j] != '\0')
        {
            if (argv[i][j] == 'a')
                return(write(1, "a", 1));
            j++;
        }
        i++;
    }
    return(write(1, "\n", 1));
}