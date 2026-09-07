// Question: Implement Union, Intersection, Set Difference and Absolute Complement using bitwise operators.

#include <stdio.h>

int main()
{
    int n, na, nb;
    int i;

    printf("Enter size of Universal Set: ");
    scanf("%d", &n);

    int U[n];
    int A[n];
    int B[n];

    int a = 0;
    int b = 0;

    printf("Enter Universal Set U: ");
    for(i = 0; i < n; i++)
        scanf("%d", &U[i]);

    printf("Enter size of Set A: ");
    scanf("%d", &na);

    printf("Enter Set A: ");
    for(i = 0; i < na; i++)
        scanf("%d", &A[i]);

    printf("Enter size of Set B: ");
    scanf("%d", &nb);

    printf("Enter Set B: ");
    for(i = 0; i < nb; i++)
        scanf("%d", &B[i]);

    // Convert A into bit representation
    for(i = 0; i < na; i++)
        a = a | (1 << A[i]);

    // Convert B into bit representation
    for(i = 0; i < nb; i++)
        b = b | (1 << B[i]);

    // Union
    printf("\nUnion: ");
    for(i = 0; i < n; i++)
    {
        if((a | b) & (1 << i))
            printf("%d ", U[i]);
    }

    // Intersection
    printf("\nIntersection: ");
    for(i = 0; i < n; i++)
    {
        if((a & b) & (1 << i))
            printf("%d ", U[i]);
    }

    // Difference A-B
    printf("\nDifference A-B: ");
    for(i = 0; i < n; i++)
    {
        if((a & ~b) & (1 << i))
            printf("%d ", U[i]);
    }

    // Complement of A
    printf("\nComplement A: ");
    for(i = 0; i < n; i++)
    {
        if((~a) & (1 << i))
            printf("%d ", U[i]);
    }

    return 0;
}