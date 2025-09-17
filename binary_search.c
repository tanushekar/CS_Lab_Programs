//Input N integer numbers in ascending order into a single dim. array and BINARY SEARCH for a given key element

#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int A[10], i, j, key, n, top, bot, mid, temp, sorted;
    system("clear");
    
    printf("\nEnter the size of an Array-A: ");
    scanf("%d", &n);
    
    printf("\nEnter %d numbers into Array-A in ascending order only: ");
    for (i=0; i<n; i++)
    scanf("%d", &A[i]);
    
    
    for (j=1; j<n; j++)
    {
        sorted= 1;
        for (i=0; i<n-j; i++)
            if(A[i]>A[i+1])
                {
                    temp=A[i];
                    A[i]= A[i+1];
                    A[i+1]= temp;
                    sorted=0;
                }
        if(sorted)
        break;
    }
    
    printf("\nSORTED elements: ");
    
    for (i=0; i<n; i++)
        printf("%d ", A[i]);
    printf("\nEnter the key element to be searched in Array-A: ");
    scanf("%d", &key);
    
    top=0; 
    bot= n-1;
    
    while (top<= bot)
    {
        mid=(top+bot)/2;
        if(key==A[mid])
        {
            printf("\nSearch passed..%d exists in Array-A at position %d\n", A[mid], mid+1);
            exit (0);
        }
        
        if(key>A[mid])
            top= mid+1;
        else
             bot= mid-1;
    }
    
    printf("\n!!Search failed..%d does NOT exist in Array-A", key);
    printf("\n");
    return 0;
}
