// Question: Define a universal set U and represent sets A and B using Boolean arrays.

#include <stdio.h>

int main()
{
    int n, na, nb;
    int i, j;

    printf("Enter size of Universal Set: ");
    scanf("%d", &n);

    char U[n];
    char A[n];
    char B[n];

    int a[n];
    int b[n];

    for(i = 0; i < n; i++)
    {
        a[i] = 0;
        b[i] = 0;
    }

    printf("Enter Universal Set U: ");
    for(i = 0; i < n; i++)
        scanf(" %c", &U[i]);

    printf("Enter size of Set A: ");
    scanf("%d", &na);

    printf("Enter Set A: ");
    for(i = 0; i < na; i++)
        scanf(" %c", &A[i]);

    printf("Enter size of Set B: ");
    scanf("%d", &nb);

    printf("Enter Set B: ");
    for(i = 0; i < nb; i++)
        scanf(" %c", &B[i]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < na; j++)
        {
            if(U[i] == A[j])
                a[i] = 1;
        }

        for(j = 0; j < nb; j++)
        {
            if(U[i] == B[j])
                b[i] = 1;
        }
    }

    printf("Boolean A: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nBoolean B: ");
    for(i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}