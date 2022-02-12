#include<stdio.h> 
int main()
{ 
    char name[30]; 
    char branch[50];
    char hobby[30];
    int regdno;
    
    //input
    printf("enter your name:\n");
    scanf("%s", &name);
    
    printf("enter your registration no.(last 3 digits):\n");
    scanf("%d", &regdno);
    
    printf("enter your branch:\n");
    scanf("%s", &branch);
    
    printf("enter your hobby:\n");
    scanf("%s", &hobby);
    
    //output
    printf("\n Your name is: %s", name);
    printf("\n Your registration no.(last 3 digits) is: %d", regdno);
    printf("\n Your branch is: %s", branch);
    printf("\n Your hobby is: %s", hobby);
     
    return 0; 
}


