#include <stdio.h>
int main(){

    int score;
    printf("Enter your score :");
    scanf("%d",&score);

    if(score>90){
        printf("you got A grade ");

    }else if(score>75){
        printf("youy got B grade");
    }
    else if(score>60){
        printf("youy got C grade");
    }
    else if(score>30){
        printf("youy got D grade");
    }
    else{
        printf("you are fail");
    }

    return 0;
}