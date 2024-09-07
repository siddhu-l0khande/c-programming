#include <stdio.h>

int main(){

    int num;
    printf("Enter the number ");
    scanf("%d",&num);

    if (num>0)
    {
        printf("the number is positive ");
    }
    if (num< 0)
    {
        printf("the num,ber is negative ");
    }
    if (num == 0)
    {
        printf("the number is zero");
    }
    

    return 0;
}