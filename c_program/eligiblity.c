#include <stdio.h>
int main(){

    int age;
    printf("Enter your age :");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("you are eligible for vote ");
    }
    else
    {
        printf("you are not eligible for vote ");

    }

    return 0;
    
}