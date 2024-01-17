#include <stdio.h>

int main(int argc, char *argv[])
{
    (void)argv; /* Suppress Warning of the unused parameter *argv[] */
    printf("%d\n", argc - 1); /* argc- 1 - the program name */
    return 0;
}

