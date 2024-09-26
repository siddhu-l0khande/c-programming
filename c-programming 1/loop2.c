#include<stdio.h>
int main(){

    int num;
    printf("welcome to the loop of the factorial\n");
    printf("Enter the number  : ");
    scanf("%d",&num);
    
    int i=2;
    int fact=1;
    while (i<=num){
        fact = fact*i;
        i++;
    }

    printf("the factorial og %d is %d",num,fact);
    return 0;
    
    
}