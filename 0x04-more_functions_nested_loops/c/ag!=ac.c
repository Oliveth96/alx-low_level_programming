#include <stdio.h>
#include <stdlib.h>
#define ac i

char **splstr(char *str, const char *delim);

int main(int ac, char *av[])
{
    // int i;
    
    for (i = 0; *av != NULL; i++)
    {
        printf("%s\n", *av);
        av++;
    }
    return(0);
}
