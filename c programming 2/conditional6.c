#include<stdio.h>

int main(){
    int age;
    printf("Enter your age :");
    scanf("%d",&age);

    if(age<13){
        printf("you are a child");
    }
    else if (age<20)
    {
        printf("you are a teen");
    }
    else if (age<60)
    {
        printf("you are a adult");
    }else{
        printf("you are a senior");
    }
    return 0;
}