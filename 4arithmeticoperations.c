#include <stdio.h>

int main()

{
    int num1, num2;
    int add, sub, mul, div, mod;

    printf("Please enter a no.\n");
    scanf("%d", &num1);  
    printf("Please enter another no.\n"); 
    scanf("%d", &num2);
    
    add = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    div = num1/num2;
    mod = num1%num2;
    
    printf("Addition of the two numbers is : %d\n", add);
    printf("Substraction of the two numbers is : %d\n", sub);
    printf("Multiplication of the two numbers is : %d\n", mul);
    printf("Division of the two numbers is : %d\n", div);
    printf("Modular division of the two numbers is : %d\n", mod);
 
    return 0;
}

