#include <stdio.h>
int main(){

    int num;
    printf("Welcome to the loop of the reverse digits \n");
    printf("Enter the number :\n");
    scanf("%d",&num);

    int rev =0;
    int copy =num;
    while (copy>0){
        rev=(rev*10)+(copy%10);
        
        copy/=10;

    }
    printf("the reverse of the numbers is : %d",rev);

    return 0;
}