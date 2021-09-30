#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int nb1;
    int nb2;
    int score;

    if (argc < 4 || argc > 4)
        return(write(1, "\n", 1));
    nb1 = atoi(argv[1]);
    nb2 = atoi(argv[3]);
    if (argv[2][0] == '-')
        score = nb1 - nb2;
    else if (argv[2][0] == '+')
        score = nb1 + nb2;
    else if (argv[2][0] == '*')
        score = nb1 * nb2;
    else if (argv[2][0] == '/')
        score = nb1 / nb2;
    else if (argv[2][0] == '%')
        score = nb1 % nb2;
    else
        return(write(1, "\n", 1));
    
    printf("%d\n", score);
}