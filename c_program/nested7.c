#include<stdio.h>

int main(){


    int hour=14;
    if(hour>=0 && hour<24){
        if(hour<12)
        {
            printf("Good Morning");
        }
        else
        {
            printf("Good Afternoon");

        }
    }
    else{
        printf("Invalid time ");

    }

    return 0;

}