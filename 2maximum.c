#include <stdio.h>

int main()

{
    int num1, num2;

    printf("Please enter a no.\n");
    scanf("%d", &num1);  
    printf("Please enter another no.\n"); 
    scanf("%d", &num2);
    
    if(num1 > num2)
    {
        printf("%d is maximum\n", num1);
    }

    else if (num2 > num1)
    {
        printf("%d is maximum\n", num2);
    }

    else
    {
        printf("Both are maximum\n");
    }

    return 0;
}

