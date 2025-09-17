//SIMPLE CALCULATOR using "switch" statement

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1, num2, choice=0;
    system("clear");
    printf("\n1)Addition \n2)Subtraction \n3)Multiplication \n4)Division \n5)Modulo Division\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("\nEnter two numbers to perform the above operation: ");
    scanf("%d %d", &num1, &num2);
    
    switch(choice)
    {
        case 1: printf("Result= %d+%d = %d\n", num1, num2, (num1+num2));
                break;
        case 2: printf("Result= %d-%d = %d\n", num1, num2, (num1-num2));
                break;
        case 3: printf("Result= %d*%d = %d\n", num1, num2, (num1*num2));
                break;
        case 5: printf("Result= %d MOD %d = %d\n", num1, num2, (num1%num2));
                break;
        case 4: if(num2 !=0)
                printf("Result= %d/%d = %.2f\n", num1, num2, ((float)num1/num2));
                else
                printf("!!Divide by zero..error\n");
                break; 
        default: printf("!!Invalid choice..\n");        
    }
    return 0;
}
