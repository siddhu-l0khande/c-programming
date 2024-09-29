#include <stdio.h>

int main(){

    int max;
    printf("welcome to the loop of the printiomng even number\n ");
    printf("Eneter the maxinmunm number\n");
    scanf("%d",&max);

    for (int i = 1; i <=max ; i++)
    {
        if( i%2==1)continue;
        printf("%d\n",i);

    }

    return 0;
    

}