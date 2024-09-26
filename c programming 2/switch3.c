#include <stdio.h>
int main(){
    int num;
    printf("Enter theb number:");
    scanf("%d",&num);
    switch (num)
    {
    case 10:
        printf("the number is 10");
        break;
    case 50:
        printf("the number is 50");
        break;
    case 109:
        printf("the number is 100");
        break;
    
    default:
    printf("The number is not equal to 10,50, & 100");
        break;
    }

    return 0;
}