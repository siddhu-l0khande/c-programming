#include <stdio.h>

int main (){
    int num;
    printf("Welcome to the loop of the arm strong number \n");
    printf("Enteer the number\n");
    scanf("%d",&num);

    int sum=0;
    int copy = num;
    while(copy>0){
        int dig = copy %10;
        sum +=dig*dig*dig;
        copy /= 10;
    }
    if (sum == num){
        printf("TRhe number %d is the Armstrong number \n",num);

    }
    else{
        printf("the number %d is not the Armstrong number ",num);
    }

    return 0;
}