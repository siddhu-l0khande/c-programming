#include <stdio.h>

int main(){

    int age;
    printf("Enter ytour age :");
    scanf("%d",&age);


    if(age<18){

        printf("You are not eligible for work \n ");

    }

    else{
        if(age>=18 && age<=60){
            printf("You are eligible for the work \n fill the required information");

        }
        else{
            printf("you are too old for work ,its not allowed to your age people to work as per the government ");

        }
    }



    return 0;
}