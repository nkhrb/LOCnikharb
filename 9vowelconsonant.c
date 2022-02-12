#include<stdio.h>

int main()
{
    char ch;
    
    printf("enter an alphabet: ");
    scanf("%c", &ch);
    
    switch(ch)
    {
    case 'a':
        printf("the alphabet is a vowel");
        break;
    case 'e':
        printf("the alphabet is a vowel");
        break;
    case 'i':
        printf("the alphabet is a vowel");
        break;
    case 'o':
        printf("the alphabet is a vowel");
        break;
    case 'u':
        printf("the alphabet is a vowel");
        break;
    default:
        printf("the alphabet is a consonant");
        
    }
    
    return 0;
}