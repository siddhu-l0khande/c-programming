#include <stdio.h>
int main(){
    int num1,num2;
    printf("Welcome to the loop of the GCD\n");
    printf("Enter the number :");
    scanf("%d%d",&num1,&num2);

    int min = num1>num2?num1:num2;
    for(int i = min; i>=1; i--){
        if(num1%i==0 && num2%i==0){
            printf("the GCD is %d",i);
            break;
        }
    }

    return 0;
}