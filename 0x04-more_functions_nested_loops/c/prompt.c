#include <stdio.h>
#include <stdlib.h>

char *_getline(void);

char *_getline(void)
{
    char *s = NULL;
    size_t bufsize = 0;
    if (getline (&s, &bufsize, stdin) == -1)
    {
        if (feof(stdin))
        {
            exit (EXIT_SUCCESS);
        }
        else
        {
            perror("getline");
            exit (EXIT_FAILURE);
        }
    }
    return(s);
}
int main(void)
{
    char *x; //we declared a pointer of x
    int y;
    char *z = "$ "; 
    
    printf("%s", z);
    x = _getline(); //getline means accepting and returning what the user types in
    printf("%s", x);
    for (y = 0; y < x[y]; y++)
    {
        printf("%s", z);
        x = _getline();
        printf("%s", x);
    }
    return (0);
}