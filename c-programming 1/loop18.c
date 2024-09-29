#include <stdio.h>

int main(){

    int num;
    int sum =0;
    printf(" welcome to the loop of the positive numbers \n");
    

    do
    {
        printf(" Plese enter the numberb:\n ");
        scanf("%d",&num);
        if(num <0)continue;
        sum += num;

    } while (num !=0);
    printf(" the sum of all positrive number is %d",sum);

    return 0;
    
}