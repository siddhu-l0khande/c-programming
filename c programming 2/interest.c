#include <stdio.h>

int main(){

    int p,r,t;

    printf("Enter the values :");
    scanf("%d%d%d",&p,&r,&t);

    float SI =p*r*t/100;

    printf("The simple interest is = %.2f",SI);

return 0;


}