#include<stdio.h>

int main() 
{
    int r;
    float dia, circum, area;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    
    dia = r*2;
    circum = 2*(22/7)*r;   
    area = (22/7)*r*r;
    
    printf("diameter: %f\n", dia);
    printf("circumference: %f\n", circum);
    printf("area: %f\n", area);
    
    return 0;
}