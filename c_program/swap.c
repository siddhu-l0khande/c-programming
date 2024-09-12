#include <stdio.h>

int main(){

    int a,b,c;

    printf("Enter the number");
    scanf("%d",&a);
    printf("Enter the number");
    scanf("%d",&b);


    // swapping 

    c=a;
    a=b;
    b=c;

printf("the values are %d and %d",a,b);


return 0;
}