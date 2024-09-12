#include <stdio.h>

int main(){

    int p,r,t;

    printf("Enter the values :");
    scanf("%d%d%d",&p,&r,&t);

    float CI=p*(1+r/100)*t;

    printf("The compound interest is %.2f",CI);


    return 0;
    
}