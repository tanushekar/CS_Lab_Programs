/*Input N integer numbers into 1D array,  arrange in ascending order using BUBBLE SORT,  print */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[100], i, j, n, temp;
    system("clear");
    printf("\nEnter the size of an Array-A: ");
    scanf("%d", &n);
    
    printf("\nInput %d integers into Array-A: ", n);
    
    for(i=0; i<n; i++)
    scanf("%d", &A[i]);
    printf("\nUNSORTED elements/ before sorting: ");
    
    for(i=0; i<n; i++)
    printf("%d ", A[i]);
    
    for(j=1; j<n; j++)
        for(i=0; i<n-j; i++)
            if(A[i]>A[i+1])
            {
                temp = A[i];
                A[i ]= A[i+1];
                A[i+1] = temp;
            }
    printf("\nSORTED elements/after sorting: ");
    
    for (i=0; i<n; i++)
        printf("%d ", A[i]);
        
    printf("\n");
    return 0;
}
