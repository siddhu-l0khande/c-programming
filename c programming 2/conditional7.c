#include <stdio.h>
int main(){

    int age;
    printf("Enter your age :");
    scanf("%d",&age);

    if(age<60)
    {
        if (age<20)
        {
            printf("you are teen");
        }else if (age<13)
        {
            printf("you are child");
        }else{
            printf("you are adult");
        }
        
        
    }else{
        printf("you are senior");
    }
    return 0;
}