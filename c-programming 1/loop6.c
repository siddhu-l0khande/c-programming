#include <stdio.h>
int main(){

    int num;
    printf("Welcome to the loop of the prime numbers\n");
    printf("Enter the number :\n");
    scanf("%d",&num);

    for(int i=2; i < num ;i++){
        if(num%i==0){
            printf("%d is not the prime ",num);
            return 0;
        }
    }
    printf("%d is the prime \n",num);
    return 0;
}