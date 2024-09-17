#include <stdio.h>

int main(){

    int num;
    printf("Enter your number :");
    scanf("%d",&num);

    if (num>0)
    {
       printf("the number is greater than zero ,so it is positive ");
    }else if(num=0){
        printf("the number is equals to zero");
    }
    else{
        printf("the number is less than zero ,so it is negative ");
    }

    return 0;
}