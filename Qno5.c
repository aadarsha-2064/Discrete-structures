// Question: Given two sets A and B, calculate and display the Cartesian Product A x B.

#include <stdio.h>

int main()
{
    int na, nb;
    int i, j;

    printf("Enter size of Set A: ");
    scanf("%d", &na);

    int A[na];

    printf("Enter Set A: ");
    for(i = 0; i < na; i++)
        scanf("%d", &A[i]);

    printf("Enter size of Set B: ");
    scanf("%d", &nb);

    int B[nb];

    printf("Enter Set B: ");
    for(i = 0; i < nb; i++)
        scanf("%d", &B[i]);

    printf("A x B = { ");

    for(i = 0; i < na; i++)
    {
        for(j = 0; j < nb; j++)
        {
            printf("(%d,%d) ", A[i], B[j]);
        }
    }

    printf("}");

    return 0;
}