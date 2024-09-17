#include <stdio.h>

int main(){
    
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    int num1= num%2==0 ? printf("the number is even "):printf("the number is odd");
    
    return 0;
}