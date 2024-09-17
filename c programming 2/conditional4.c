#include <stdio.h>

int main(){
    int score;
    printf("Enter your score :");
    scanf("%d",&score);

    if(score>60){
        if (score>90)
        {
            printf("your grade is A");
        }else if (score>75)
        {
            printf("your grade is B");
        }
        else  {
            printf("your grade is C");
        }}
    else {
            if(score>30){
                printf("your grade is D");
            }
            else{
                printf("you are fail");
            }
        }

        return 0;
        
        
        
    }
