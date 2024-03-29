#include <stdio.h>
/*base case */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    else if (n == 0)
        return 0;
    else
        return sqrt_helper(n, 1);
}

int sqrt_helper(int n, int i)
{
    if (n == 1)
        return 1;
    else if (i * i == n)
        return i;
    else if (i * i > n)
        return -1;
    else
        return sqrt_helper(n, i + 1);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}
