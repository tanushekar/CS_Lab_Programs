//addition and subtraction of 2 matrices

#include<stdio.h>
#include<stdlib.h>
#define MAX 5 

int main ()
{
    int A[MAX][MAX], B[MAX][MAX], S[MAX][MAX], D[MAX][MAX], i, j, m, n, p, q;
    system("clear");
    printf("\nEnter the size/ order/ dim. of Matrix-A:");
    scanf("%d %d", &m, &n);
    
    printf("\nEnter the size/ order/ dim. of the Matrix-B: ");
    scanf("%d %d", &p, &q);
    
    if (!(m==p && n==q))
    {
        printf("\nSize/ order/ dim. of the input matrices NOT compatible...\n");
        exit (0);
    }
    
    printf("\nEnter %d elements into Matrix-A: ", (m*n));
    
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            scanf ("%d", &A[i][j]);
            
    printf("\nEnter %d elements into Matrix-B: ", (p*q));
    
    for (i=0; i<p; i++)
        for (j=0; j<q; j++)
        {
            S[i][j] = A[i][j] + B[i][j];
            D[i][j] = A[i][j] - B[i][j];
        }
    printf("\nElements of Matrix-A: \n");
    
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t", A[i][j]);
        printf("\n");
    }
    
    printf("\nElements of Matrix-B: \n");
    
    for (i=0; i<p; i++)
    {
        for (j=0; j<q; j++)
            printf("%d\t", B[i][j]);
        printf("\n");
    }
    
    printf("\nAddition of two matrices i.e, S(MxN): \n");
    
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
            printf("%d ", S[i][j]);
        printf("\n");
    }
    
    printf("\nSubtraction of two matrices i.e, D(MxN): \n");
    
    for (i=0; i<p; i++)
    {
        for(j=0; j<q; j++)
            printf("%d ", D[i][j]);
        printf("\n");
    }
    return 0;
}
