#include <stdio.h>


int A[100];

void create(int A[], int *n)
{
    int i;
    printf("Enter the number of elements to insert:\n");
    scanf("%d", n);   // take input into *n

    printf("Enter %d elements:\n", *n);
    for(i=0; i<*n; i++)
    {
        scanf("%d", &A[i]);
    }
}

int inversion(int A[], int n)
{
    int inv = 0;
    int i, j;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)   // fixed condition
        {
            if(A[i] > A[j])
            {
                inv++;
            }
        }
    }
    return inv;
}

int main()
{
    int n;
    create(A, &n);

    int invCount = inversion(A, n);
    printf("Number of inversions = %d\n", invCount);

    return 0;
}
