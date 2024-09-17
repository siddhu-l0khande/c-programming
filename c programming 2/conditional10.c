#include <stdio.h>
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    int A= num>0 ? printf("the absolute value is %d",num):
    printf("The absolute value is :%d",-num);


    return 0;
}