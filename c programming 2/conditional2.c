#include <stdio.h>

int main(){
    int A,B,C;
    printf("Enter the first number :");
    scanf("%d",&A);
    printf("Enter the second number :");
    scanf("%d",&B);
    printf("Enter the third number :");
    scanf("%d",&C);

    if(A>B){
        if(A>C){
            printf("A is greater of all ");
        }
    }else if(B>C){
        printf("B greater of all ");
    }
    else{
        printf("C is greater of all ");
    }

    return 0;
}