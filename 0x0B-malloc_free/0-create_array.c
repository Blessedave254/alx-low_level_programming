#include <main.h>
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;
    }

    char *array = (char *)malloc(size * sizeof(char));

    if (array == NULL) {
        return NULL;
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;
    }

    return array;
}
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
