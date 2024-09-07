#include <stdio.h>

int main(){

    int num;
    printf("enter the number");
    scanf("%d",&num);

    if (num%5==0)
    {
        printf("the numberb is multiple of 5");
    }
    else
    {
        printf("the number is not multiple of 5");

    }
    return 0;
}