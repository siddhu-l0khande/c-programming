#include <stdio.h>

int main(){
    char grade;
    printf("\n\n\t\tStudytonight-best place to learn\n\n");
    printf("Enter your grade\n");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Keep it up\n");
        break;
    case 'C':
        printf("Well done \n break keywords takes excution to exit the switch case \n\n");
        break;
    case 'D':
        printf("you passed\n ");
        break;
    case 'F':
        printf("Failed \n");
        break;
    
    
    default:
    printf("invalid grade\n");
        break;
    }
    printf("your grade is %c\n ",grade);
    printf("\n\n\t\t\tcoding is Fun!\n\n\n");

    return 0;
    }