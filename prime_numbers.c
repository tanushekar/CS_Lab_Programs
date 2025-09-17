/*to generate and print prime numbers between N1 and N2 given by the user */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n, n1, n2, flag;
    system("clear");
    printf("\nEnter the lower and upper limit i.e, N1 and N2: ");
    scanf("%d %d", &n1, &n2);
    printf("The prime numbers between %d and %d are: ", n1, n2);
    
    for(n=n1; n<=n2; n++)
    {
        flag=1;
        for(i=2; i<=(n/2); i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
            printf("%d\t", n);
    }
    return 0;
}
