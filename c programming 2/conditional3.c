#include <stdio.h>

int main(){

    int year;
    printf("Enter the year :");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0 ||year%400==0){
        printf("%d is the leap year ");
    }
    else{
        printf("%d is the not a leap year ");
    }

    return 0;
}