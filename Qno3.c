// Question: Generate the Power Set P(A) using binary counting from 0 to 2^n - 1.

#include <stdio.h>

int main()
{
    int n;
    int i, j;
    int total = 1;

    printf("Enter size of Set A: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter Set A: ");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    for(i = 0; i < n; i++)
        total = total * 2;

    printf("Power Set:\n");

    for(i = 0; i < total; i++)
    {
        printf("{ ");

        for(j = 0; j < n; j++)
        {
            if(i & (1 << j))
                printf("%d ", A[j]);
        }

        printf("}\n");
    }

    return 0;
}