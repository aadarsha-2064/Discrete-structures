// Question: Implement Union, Intersection, Set Difference and Absolute Complement using bitwise operators.

#include <stdio.h>

int main()
{
    int n;
    int i;

    printf("Enter size of sets: ");
    scanf("%d", &n);

    int A[n];
    int B[n];

    printf("Enter Boolean A: ");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Enter Boolean B: ");
    for(i = 0; i < n; i++)
        scanf("%d", &B[i]);

    printf("Union: ");
    for(i = 0; i < n; i++)
        printf("%d ", A[i] | B[i]);

    printf("\nIntersection: ");
    for(i = 0; i < n; i++)
        printf("%d ", A[i] & B[i]);

    printf("\nDifference A-B: ");
    for(i = 0; i < n; i++)
        printf("%d ", A[i] & ~B[i]);

    printf("\nComplement A: ");
    for(i = 0; i < n; i++)
        printf("%d ", ~A[i] & 1);

    return 0;
}