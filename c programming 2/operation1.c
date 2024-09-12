#include <stdio.h>

int main(){

    int a,b,sum,sub,mul,div,modulo;

    

    printf("Enter the two numbers :");
    scanf("%d%d",&a,&b);

    sum = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    modulo =a%b;

    printf("The sum of the numbers is :%d \n",sum);
    printf("The sub of the numbers is :%d \n",sub);
    printf("The mul of the numbers is :%d \n",mul);
    printf("The div of the numbers is :%d \n",div);
    printf("The remiander of the numbers is :%d \n",modulo);

    return 0;
    
}