#include <stdio.h>

int main(){

    int num;
    int sum = 0;
    printf("Welcome to the loop \n");

    do
    {
       printf("Eneter the number \n");
       scanf("%d",&num);
       sum +=num;
    } while (num !=0);
    
    printf("the sum of all your number is :%d", sum);


    return 0;


}