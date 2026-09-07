// Question: Calculate the cardinality of the union of three finite sets
// using the Inclusion-Exclusion formula.

#include <stdio.h>

int main()
{
    int n, na, nb, nc;
    int i, j;

    int a = 0, b = 0, c = 0;
    int ab = 0, ac = 0, bc = 0, abc = 0;

    printf("Enter size of Universal Set: ");
    scanf("%d", &n);

    int U[n];

    printf("Enter Universal Set U: ");
    for(i = 0; i < n; i++)
        scanf("%d", &U[i]);

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

    printf("Enter size of Set C: ");
    scanf("%d", &nc);

    int C[nc];

    printf("Enter Set C: ");
    for(i = 0; i < nc; i++)
        scanf("%d", &C[i]);

    // Cardinality of each set
    a = na;
    b = nb;
    c = nc;

    // Find A intersection B
    for(i = 0; i < na; i++)
    {
        for(j = 0; j < nb; j++)
        {
            if(A[i] == B[j])
            {
                ab++;
                break;
            }
        }
    }

    // Find A intersection C
    for(i = 0; i < na; i++)
    {
        for(j = 0; j < nc; j++)
        {
            if(A[i] == C[j])
            {
                ac++;
                break;
            }
        }
    }

    // Find B intersection C
    for(i = 0; i < nb; i++)
    {
        for(j = 0; j < nc; j++)
        {
            if(B[i] == C[j])
            {
                bc++;
                break;
            }
        }
    }

    // Find A intersection B intersection C
    for(i = 0; i < na; i++)
    {
        for(j = 0; j < nb; j++)
        {
            if(A[i] == B[j])
            {
                int k;

                for(k = 0; k < nc; k++)
                {
                    if(A[i] == C[k])
                    {
                        abc++;
                        break;
                    }
                }

                break;
            }
        }
    }

    printf("\n|A| = %d\n", a);
    printf("|B| = %d\n", b);
    printf("|C| = %d\n", c);

    printf("|A intersection B| = %d\n", ab);
    printf("|A intersection C| = %d\n", ac);
    printf("|B intersection C| = %d\n", bc);
    printf("|A intersection B intersection C| = %d\n", abc);

    printf("|A U B U C| = %d",
           a + b + c - ab - ac - bc + abc);

    return 0;
}