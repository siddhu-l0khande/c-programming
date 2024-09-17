#include <stdio.h>
int main(){

    int num1,num2;
    printf("Enter the numbers :");
    scanf("%d%d",&num1,&num2);

    int min = num1>num2? num2 : num1 ;
    printf("minimum of two nnumbers is :%d",min);
    
    return 0;
}