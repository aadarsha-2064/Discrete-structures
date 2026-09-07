#include <stdio.h>

int count = 0;

int fib_naive(int n)
{
    count++;

    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fib_naive(n - 1) + fib_naive(n - 2);
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", fib_naive(i));
    }

    printf("\nTotal function calls = %d", count);

    return 0;
}