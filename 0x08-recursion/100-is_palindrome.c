
#include <stdio.h>

/*base case */
int is_palindrome(char *s)
{
    if (s == NULL)
        return 0;
    int len = strlen(s);
    if (len == 0 || len == 1)
        return 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
            return 0;
    }
    return 1;
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
