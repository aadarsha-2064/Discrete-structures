#include <stdio.h>

int factorial(int n, int depth)
{
    printf("Depth = %d, n = %d\n", depth, n);

    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1, depth + 1);
}

int main()
{
    int n, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    result = factorial(n, 0);

    printf("Factorial = %d", result);

    return 0;
}