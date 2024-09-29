#include <stdio.h>

int main(){
    int num;
    printf("welcome to the loop\n ");

    do
    {
       printf("please enter the positive the number ");
       scanf("%d",&num);
    } while (num <=0);

    printf(" You have succesfully enter the positive number\n");
    

    return 0;
}