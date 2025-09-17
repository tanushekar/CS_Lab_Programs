//to find TRACE  and NORM   of given matrix

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX 5

void trace_matrix(int[MAX][MAX], int);
float norm_matrix(int[MAX][MAX], int, int);

int A[MAX][MAX], i, j, m, n, trace=0, sum=0;
float norm=0;

int main()
{
    system("clear");
    
    rep:
    
    printf("\nEnter the size/ order/ dim. of Matrix-A: ");
    scanf("%d %d", &m, &n);
    
    if(m!=n)
    {
        printf("\nOrder of the Matrix-A must be square Matrix i.e, M=N...");
        goto rep;
    }
    
    printf("\nInput %d elements into Matrix-A: ", (m*n));
    
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &A[i][j]);
            
    printf("\nElements of Matrix-A: \n");
    
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    
    //trace of matrix-
    
    trace_matrix(A,n);
    printf("\nTRACE is %d\n", trace);
    
    //norm of matrix
    norm=norm_matrix(A, m, n);
    printf("\nNORM is %f\n", norm);
        return 0;
}

//User defined functions

void trace_matrix(int A[MAX][MAX], int n)
{
    for(i=0; i<n; i++)
        trace += A[i][i];
}
float norm_matrix(int A[MAX][MAX], int m, int n)
{
    for(i=0; i<m; i++)
        for(j=0; j<n; ++j)
            sum += pow(A[i][j], 2);
    norm= sqrt(sum);
    return norm;
}
