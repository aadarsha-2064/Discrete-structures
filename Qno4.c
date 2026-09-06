// Question: Calculate the cardinality of the union of three finite sets using the Inclusion-Exclusion formula.

#include <stdio.h>

int main()
{
    int n;
    int i;
    int a = 0, b = 0, c = 0;
    int ab = 0, ac = 0, bc = 0, abc = 0;

    printf("Enter size of sets: ");
    scanf("%d", &n);

    int A[n];
    int B[n];
    int C[n];

    printf("Enter A: ");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Enter B: ");
    for(i = 0; i < n; i++)
        scanf("%d", &B[i]);

    printf("Enter C: ");
    for(i = 0; i < n; i++)
        scanf("%d", &C[i]);

    for(i = 0; i < n; i++)
    {
        a += A[i];
        b += B[i];
        c += C[i];

        if(A[i] & B[i])
            ab++;

        if(A[i] & C[i])
            ac++;

        if(B[i] & C[i])
            bc++;

        if(A[i] & B[i] & C[i])
            abc++;
    }

    printf("|A| = %d\n", a);
    printf("|B| = %d\n", b);
    printf("|C| = %d\n", c);

    printf("|A U B U C| = %d",
           a + b + c - ab - ac - bc + abc);

    return 0;
}