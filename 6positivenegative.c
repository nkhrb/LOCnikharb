#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if(num > 0) 
    {
    printf("%d is positive ", num); 
    }
    else if(num < 0)
    {
    printf ("%d is negative ", num);
    }
    else 
    {
    printf("%d is zero", num); 
    }
    return 0; 
}